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

// Function: entry_00151d0c
// Address: 0x151d0c - 0x151dc4
void entry_00151d0c_0x151d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151d0c_0x151d0c");
#endif

    switch (ctx->pc) {
        case 0x151d8cu: goto label_151d8c;
        default: break;
    }

    ctx->pc = 0x151d0cu;

    // 0x151d0c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151d10: 0x8c23a4a8  lw          $v1, -0x5B58($at)
    ctx->pc = 0x151d10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA4A8u));
    // 0x151d14: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x151d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x151d18: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x151d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x151d1c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151d20: 0xac22a4a8  sw          $v0, -0x5B58($at)
    ctx->pc = 0x151d20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EA4A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EA4A8u, _value); } while (0);
    // 0x151d24: 0x3c074307  lui         $a3, 0x4307
    ctx->pc = 0x151d24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17159 << 16));
    // 0x151d28: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x151d28u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151d2c: 0x0  nop
    ctx->pc = 0x151d2cu;
    // NOP
    // 0x151d30: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x151d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x151d34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151d34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151d38: 0x0  nop
    ctx->pc = 0x151d38u;
    // NOP
    // 0x151d3c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x151d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x151d40: 0x3c054220  lui         $a1, 0x4220
    ctx->pc = 0x151d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16928 << 16));
    // 0x151d44: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x151d44u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151d48: 0x0  nop
    ctx->pc = 0x151d48u;
    // NOP
    // 0x151d4c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x151d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x151d50: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x151d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x151d54: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x151d54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151d58: 0x0  nop
    ctx->pc = 0x151d58u;
    // NOP
    // 0x151d5c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x151d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x151d60: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x151d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x151d64: 0x846315ec  lh          $v1, 0x15EC($v1)
    ctx->pc = 0x151d64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x151d68: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x151D68u;
    {
        const bool branch_taken_0x151d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151d68) {
            ctx->pc = 0x151DC4u;
            return;
        }
    }
    ctx->pc = 0x151D70u;
    // 0x151d70: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x151d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x151d74: 0x2467a4a0  addiu       $a3, $v1, -0x5B60
    ctx->pc = 0x151d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
    // 0x151d78: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x151d78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x151d7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151d7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151d80: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151d84: 0xc0bd0c8  jal         func_2F4320
    ctx->pc = 0x151D84u;
    SET_GPR_U32(ctx, 31, 0x151D8Cu);
    ctx->pc = 0x2F4320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4320u, 0x151D84u, 0x151D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151D8Cu;
label_151d8c:
    // 0x151d8c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x151d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x151d90: 0x848215ec  lh          $v0, 0x15EC($a0)
    ctx->pc = 0x151d90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
    // 0x151d94: 0x2442ffa6  addiu       $v0, $v0, -0x5A
    ctx->pc = 0x151d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967206));
    // 0x151d98: 0xa48215ec  sh          $v0, 0x15EC($a0)
    ctx->pc = 0x151d98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5612), (uint16_t)GPR_U32(ctx, 2));
    // 0x151d9c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x151d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x151da0: 0x848315ec  lh          $v1, 0x15EC($a0)
    ctx->pc = 0x151da0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
    // 0x151da4: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x151da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x151da8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x151da8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x151dac: 0x44103b0  bgez        $v0, . + 4 + (0x3B0 << 2)
    ctx->pc = 0x151DACu;
    {
        const bool branch_taken_0x151dac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x151dac) {
            ctx->pc = 0x152C70u;
            return;
        }
    }
    ctx->pc = 0x151DB4u;
    // 0x151db4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x151db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x151db8: 0xa44015ec  sh          $zero, 0x15EC($v0)
    ctx->pc = 0x151db8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5612), (uint16_t)GPR_U32(ctx, 0));
    // 0x151dbc: 0x100003ac  b           . + 4 + (0x3AC << 2)
    ctx->pc = 0x151DBCu;
    {
        const bool branch_taken_0x151dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151dbc) {
            ctx->pc = 0x152C70u;
            return;
        }
    }
    ctx->pc = 0x151DC4u;
}
