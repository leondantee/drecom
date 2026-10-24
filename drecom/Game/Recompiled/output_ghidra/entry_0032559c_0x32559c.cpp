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

// Function: entry_0032559c
// Address: 0x32559c - 0x325658
void entry_0032559c_0x32559c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032559c_0x32559c");
#endif

    switch (ctx->pc) {
        case 0x325650u: goto label_325650;
        default: break;
    }

    ctx->pc = 0x32559cu;

    // 0x32559c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x32559cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3255a0: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x3255a0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3255a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3255a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3255a8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3255a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3255ac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3255acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3255b0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3255b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3255b4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3255b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3255b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3255b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3255bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3255bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3255c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3255c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3255c4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x3255c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3255c8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3255c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3255cc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3255ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3255d0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3255d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3255d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3255d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3255d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3255d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3255dc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x3255dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x3255e0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3255e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3255e4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3255e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3255e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3255e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3255ec: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x3255ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x3255f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3255f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3255f4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3255f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3255f8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x3255f8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3255fc: 0x0  nop
    ctx->pc = 0x3255fcu;
    // NOP
    // 0x325600: 0x0  nop
    ctx->pc = 0x325600u;
    // NOP
    // 0x325604: 0x1810  mfhi        $v1
    ctx->pc = 0x325604u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x325608: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x325608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32560c: 0x2442a1d0  addiu       $v0, $v0, -0x5E30
    ctx->pc = 0x32560cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943184));
    // 0x325610: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x325610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x325614: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x325614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x325618: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x325618u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32561c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x32561cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x325620: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x325620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x325624: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x325624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x325628: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x325628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x32562c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x32562cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x325630: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x325630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x325634: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x325634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x325638: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x325638u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32563c: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x32563cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x325640: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x325640u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x325644: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x325644u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x325648: 0xc0c8be4  jal         func_322F90
    ctx->pc = 0x325648u;
    SET_GPR_U32(ctx, 31, 0x325650u);
    ctx->pc = 0x322F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F90u, 0x325648u, 0x325650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325650u;
label_325650:
    // 0x325650: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x325650u;
    {
        const bool branch_taken_0x325650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325650) {
            ctx->pc = 0x3258CCu;
            return;
        }
    }
    ctx->pc = 0x325658u;
}
