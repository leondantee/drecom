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

// Function: entry_0028c504
// Address: 0x28c504 - 0x28c5bc
void entry_0028c504_0x28c504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028c504_0x28c504");
#endif

    switch (ctx->pc) {
        case 0x28c51cu: goto label_28c51c;
        case 0x28c534u: goto label_28c534;
        case 0x28c54cu: goto label_28c54c;
        case 0x28c564u: goto label_28c564;
        default: break;
    }

    ctx->pc = 0x28c504u;

    // 0x28c504: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x28c504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28c508: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28c508u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28c50c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x28c50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28c510: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x28c510u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28c514: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C514u;
    SET_GPR_U32(ctx, 31, 0x28C51Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C514u, 0x28C51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C51Cu;
label_28c51c:
    // 0x28c51c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28c51cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28c520: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x28c520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28c524: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28c524u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28c528: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x28c528u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x28c52c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C52Cu;
    SET_GPR_U32(ctx, 31, 0x28C534u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C52Cu, 0x28C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C534u;
label_28c534:
    // 0x28c534: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28c534u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28c538: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x28c538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28c53c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28c53cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28c540: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x28c540u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x28c544: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C544u;
    SET_GPR_U32(ctx, 31, 0x28C54Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C544u, 0x28C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C54Cu;
label_28c54c:
    // 0x28c54c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28c54cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28c550: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x28c550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28c554: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28c554u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28c558: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x28c558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x28c55c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C55Cu;
    SET_GPR_U32(ctx, 31, 0x28C564u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C55Cu, 0x28C564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C564u;
label_28c564:
    // 0x28c564: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28c564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28c568: 0xa2035e04  sb          $v1, 0x5E04($s0)
    ctx->pc = 0x28c568u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24068), (uint8_t)GPR_U32(ctx, 3));
    // 0x28c56c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c570: 0x8c2420d8  lw          $a0, 0x20D8($at)
    ctx->pc = 0x28c570u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6220D8u));
    // 0x28c574: 0x28810014  slti        $at, $a0, 0x14
    ctx->pc = 0x28c574u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x28c578: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x28C578u;
    {
        const bool branch_taken_0x28c578 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c578) {
            ctx->pc = 0x28C5BCu;
            return;
        }
    }
    ctx->pc = 0x28C580u;
    // 0x28c580: 0x3c03bd57  lui         $v1, 0xBD57
    ctx->pc = 0x28c580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48471 << 16));
    // 0x28c584: 0x34639436  ori         $v1, $v1, 0x9436
    ctx->pc = 0x28c584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37942);
    // 0x28c588: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28c588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28c58c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c590: 0x8c3520d8  lw          $s5, 0x20D8($at)
    ctx->pc = 0x28c590u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x6220D8u));
    // 0x28c594: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x28c594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x28c598: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c59c: 0xac2320d8  sw          $v1, 0x20D8($at)
    ctx->pc = 0x28c59cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6220D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220D8u, _value); } while (0);
    // 0x28c5a0: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x28c5a0u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c5a4: 0x0  nop
    ctx->pc = 0x28c5a4u;
    // NOP
    // 0x28c5a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28c5a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28c5ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28c5acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28c5b0: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x28c5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    // 0x28c5b4: 0x100004c0  b           . + 4 + (0x4C0 << 2)
    ctx->pc = 0x28C5B4u;
    {
        const bool branch_taken_0x28c5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c5b4) {
            ctx->pc = 0x28D8B8u;
            return;
        }
    }
    ctx->pc = 0x28C5BCu;
}
