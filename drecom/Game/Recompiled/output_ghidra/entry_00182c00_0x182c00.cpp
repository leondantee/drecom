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

// Function: entry_00182c00
// Address: 0x182c00 - 0x182cc8
void entry_00182c00_0x182c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182c00_0x182c00");
#endif

    ctx->pc = 0x182c00u;

    // 0x182c00: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x182c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182c04: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182c08: 0xe420f240  swc1        $f0, -0xDC0($at)
    ctx->pc = 0x182c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F240u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F240u, _value); } while (0); }
    // 0x182c0c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x182c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182c10: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182c14: 0xe420f238  swc1        $f0, -0xDC8($at)
    ctx->pc = 0x182c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F238u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F238u, _value); } while (0); }
    // 0x182c18: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182c1c: 0x8430f138  lh          $s0, -0xEC8($at)
    ctx->pc = 0x182c1cu;
    SET_GPR_S32(ctx, 16, (int16_t)FAST_READ16(0x47F138u));
    // 0x182c20: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x182c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x182c24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x182c24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x182c28: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x182c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x182c2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x182c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x182c30: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182c34: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x182c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x182c38: 0x24821380  addiu       $v0, $a0, 0x1380
    ctx->pc = 0x182c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4992));
    // 0x182c3c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x182c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182c40: 0x8c650158  lw          $a1, 0x158($v1)
    ctx->pc = 0x182c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x182c44: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x182c44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x182c48: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x182c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x182c4c: 0xac620158  sw          $v0, 0x158($v1)
    ctx->pc = 0x182c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 344), GPR_U32(ctx, 2));
    // 0x182c50: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x182c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x182c54: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x182c54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182c58: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x182c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x182c5c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x182c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x182c60: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x182c60u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x182c64: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182c68: 0x8424f138  lh          $a0, -0xEC8($at)
    ctx->pc = 0x182c68u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x47F138u));
    // 0x182c6c: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x182c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x182c70: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x182c70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182c74: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x182c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182c78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182c7c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182c80: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x182c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182c84: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182c88: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x182c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182c8c: 0x8ca20160  lw          $v0, 0x160($a1)
    ctx->pc = 0x182c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x182c90: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x182c90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x182c94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x182c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x182c98: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x182C98u;
    {
        const bool branch_taken_0x182c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x182c98) {
            ctx->pc = 0x182CF0u;
            return;
        }
    }
    ctx->pc = 0x182CA0u;
    // 0x182ca0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x182ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x182ca4: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x182CA4u;
    {
        const bool branch_taken_0x182ca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x182ca4) {
            ctx->pc = 0x182CE0u;
            return;
        }
    }
    ctx->pc = 0x182CACu;
    // 0x182cac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x182cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182cb0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x182CB0u;
    {
        const bool branch_taken_0x182cb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x182cb0) {
            ctx->pc = 0x182CC8u;
            return;
        }
    }
    ctx->pc = 0x182CB8u;
    // 0x182cb8: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x182CB8u;
    {
        const bool branch_taken_0x182cb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x182cb8) {
            ctx->pc = 0x182D08u;
            return;
        }
    }
    ctx->pc = 0x182CC0u;
    // 0x182cc0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x182CC0u;
    {
        const bool branch_taken_0x182cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182cc0) {
            ctx->pc = 0x182D08u;
            return;
        }
    }
    ctx->pc = 0x182CC8u;
}
