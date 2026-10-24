#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_002f45dc
// Address: 0x2f45dc - 0x2f4700
void entry_002f45dc_0x2f45dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f45dc_0x2f45dc");
#endif

    ctx->pc = 0x2f45dcu;

    // 0x2f45dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f45dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f45e0: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x2f45e0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2f45e4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f45e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f45e8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f45e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f45ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f45ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f45f0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f45f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f45f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f45f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f45f8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f45f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f45fc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f45fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4600: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4604: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4608: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f460c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f460cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f4610: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4614: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4614u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4618: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f461c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f461cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4620: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4624: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f4624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f4628: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f4628u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f462c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f462cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f4630: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4634: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f4634u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f4638: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f4638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f463c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2f463cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f4640: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f4640u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f4644: 0x0  nop
    ctx->pc = 0x2f4644u;
    // NOP
    // 0x2f4648: 0x0  nop
    ctx->pc = 0x2f4648u;
    // NOP
    // 0x2f464c: 0x1810  mfhi        $v1
    ctx->pc = 0x2f464cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f4650: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f4650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f4654: 0x24428ed0  addiu       $v0, $v0, -0x7130
    ctx->pc = 0x2f4654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938320));
    // 0x2f4658: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f465c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f465cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f4660: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2f4660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4664: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4668: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4668u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f466c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f466cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4670: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4678: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f467c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f467cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f4680: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4684: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4684u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4688: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f468c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f468cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4694: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f4694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f4698: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f4698u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f469c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f469cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f46a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f46a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f46a4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f46a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f46a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f46a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f46ac: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2f46acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f46b0: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f46b0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f46b4: 0x0  nop
    ctx->pc = 0x2f46b4u;
    // NOP
    // 0x2f46b8: 0x0  nop
    ctx->pc = 0x2f46b8u;
    // NOP
    // 0x2f46bc: 0x1810  mfhi        $v1
    ctx->pc = 0x2f46bcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f46c0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f46c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f46c4: 0x24428ed0  addiu       $v0, $v0, -0x7130
    ctx->pc = 0x2f46c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938320));
    // 0x2f46c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f46cc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f46ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f46d0: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x2f46d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f46d4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f46d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f46d8: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f46d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f46dc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2f46dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f46e0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f46e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f46e4: 0x2447dbc0  addiu       $a3, $v0, -0x2440
    ctx->pc = 0x2f46e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f46e8: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2f46e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f46ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f46ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f46f0: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2f46f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f46f4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f46f4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f46f8: 0xc0bbdc4  jal         func_2EF710
    ctx->pc = 0x2F46F8u;
    SET_GPR_U32(ctx, 31, 0x2F4700u);
    ctx->pc = 0x2EF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF710u, 0x2F46F8u, 0x2F4700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4700u;
}
