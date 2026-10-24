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

// Function: entry_002a7c4c
// Address: 0x2a7c4c - 0x2a7d24
void entry_002a7c4c_0x2a7c4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a7c4c_0x2a7c4c");
#endif

    switch (ctx->pc) {
        case 0x2a7c5cu: goto label_2a7c5c;
        case 0x2a7c7cu: goto label_2a7c7c;
        case 0x2a7c8cu: goto label_2a7c8c;
        case 0x2a7ca0u: goto label_2a7ca0;
        case 0x2a7cacu: goto label_2a7cac;
        default: break;
    }

    ctx->pc = 0x2a7c4cu;

    // 0x2a7c4c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7c50: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a7c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a7c54: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A7C54u;
    SET_GPR_U32(ctx, 31, 0x2A7C5Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A7C54u, 0x2A7C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C5Cu;
label_2a7c5c:
    // 0x2a7c5c: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2a7c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7c60: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a7c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7c64: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7c68: 0x24c40120  addiu       $a0, $a2, 0x120
    ctx->pc = 0x2a7c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x2a7c6c: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x2a7c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x2a7c70: 0x24660180  addiu       $a2, $v1, 0x180
    ctx->pc = 0x2a7c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x2a7c74: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A7C74u;
    SET_GPR_U32(ctx, 31, 0x2A7C7Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A7C74u, 0x2A7C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C7Cu;
label_2a7c7c:
    // 0x2a7c7c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7c80: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a7c80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a7c84: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A7C84u;
    SET_GPR_U32(ctx, 31, 0x2A7C8Cu);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A7C84u, 0x2A7C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C8Cu;
label_2a7c8c:
    // 0x2a7c8c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a7c8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a7c90: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a7c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7c94: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a7c94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a7c98: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A7C98u;
    SET_GPR_U32(ctx, 31, 0x2A7CA0u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A7C98u, 0x2A7CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7CA0u;
label_2a7ca0:
    // 0x2a7ca0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7ca4: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A7CA4u;
    SET_GPR_U32(ctx, 31, 0x2A7CACu);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A7CA4u, 0x2A7CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7CACu;
label_2a7cac:
    // 0x2a7cac: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a7cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7cb0: 0x3c043f33  lui         $a0, 0x3F33
    ctx->pc = 0x2a7cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16179 << 16));
    // 0x2a7cb4: 0x34833333  ori         $v1, $a0, 0x3333
    ctx->pc = 0x2a7cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
    // 0x2a7cb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a7cb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a7cbc: 0xc4a00180  lwc1        $f0, 0x180($a1)
    ctx->pc = 0x2a7cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7cc0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a7cc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a7cc4: 0xe4a00180  swc1        $f0, 0x180($a1)
    ctx->pc = 0x2a7cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 384), bits); }
    // 0x2a7cc8: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a7cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7ccc: 0x3c043f33  lui         $a0, 0x3F33
    ctx->pc = 0x2a7cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16179 << 16));
    // 0x2a7cd0: 0x34833333  ori         $v1, $a0, 0x3333
    ctx->pc = 0x2a7cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
    // 0x2a7cd4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a7cd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a7cd8: 0xc4a00188  lwc1        $f0, 0x188($a1)
    ctx->pc = 0x2a7cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7cdc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a7cdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a7ce0: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x2a7ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    // 0x2a7ce4: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a7ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7ce8: 0x90a609e7  lbu         $a2, 0x9E7($a1)
    ctx->pc = 0x2a7ce8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
    // 0x2a7cec: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2A7CECu;
    {
        const bool branch_taken_0x2a7cec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7cec) {
            ctx->pc = 0x2A7D24u;
            return;
        }
    }
    ctx->pc = 0x2A7CF4u;
    // 0x2a7cf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a7cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7cf8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7cfc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2a7cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a7d00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a7d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7d04: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7d08: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x2a7d08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a7d0c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7d10: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2a7d10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a7d14: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7d18: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2a7d18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a7d1c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7d20: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2a7d20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2a7d24u;
}
