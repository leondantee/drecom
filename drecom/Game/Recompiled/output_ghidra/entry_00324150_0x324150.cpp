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

// Function: entry_00324150
// Address: 0x324150 - 0x324208
void entry_00324150_0x324150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00324150_0x324150");
#endif

    switch (ctx->pc) {
        case 0x324200u: goto label_324200;
        default: break;
    }

    ctx->pc = 0x324150u;

    // 0x324150: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x324150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324154: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x324154u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x324158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x324158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32415c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32415cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x324160: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324164: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324164u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324168: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32416c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32416cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x324170: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324174: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x324174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324178: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x324178u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x32417c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x32417cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324180: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324180u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324184: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x324188: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x324188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32418c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32418cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324190: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x324190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x324194: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x324194u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x324198: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x324198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x32419c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x32419cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3241a0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x3241a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x3241a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3241a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3241a8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3241a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3241ac: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x3241acu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3241b0: 0x0  nop
    ctx->pc = 0x3241b0u;
    // NOP
    // 0x3241b4: 0x0  nop
    ctx->pc = 0x3241b4u;
    // NOP
    // 0x3241b8: 0x1810  mfhi        $v1
    ctx->pc = 0x3241b8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3241bc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3241bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3241c0: 0x2442a0e0  addiu       $v0, $v0, -0x5F20
    ctx->pc = 0x3241c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942944));
    // 0x3241c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3241c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3241c8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3241c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3241cc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3241ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3241d0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3241d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x3241d4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3241d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3241d8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x3241d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3241dc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3241dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3241e0: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x3241e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3241e4: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x3241e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3241e8: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x3241e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3241ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3241ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3241f0: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x3241f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3241f4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x3241f4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3241f8: 0xc0c8be4  jal         func_322F90
    ctx->pc = 0x3241F8u;
    SET_GPR_U32(ctx, 31, 0x324200u);
    ctx->pc = 0x322F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F90u, 0x3241F8u, 0x324200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324200u;
label_324200:
    // 0x324200: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x324200u;
    {
        const bool branch_taken_0x324200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x324200) {
            ctx->pc = 0x324384u;
            return;
        }
    }
    ctx->pc = 0x324208u;
}
