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

// Function: entry_00182d24
// Address: 0x182d24 - 0x182da0
void entry_00182d24_0x182d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182d24_0x182d24");
#endif

    ctx->pc = 0x182d24u;

    // 0x182d24: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x182d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x182d28: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x182d28u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182d2c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x182d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x182d30: 0x24430050  addiu       $v1, $v0, 0x50
    ctx->pc = 0x182d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x182d34: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x182d34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x182d38: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182d3c: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182d3cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182d40: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x182d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x182d44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x182d44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x182d48: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x182d48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x182d4c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x182d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x182d50: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x182d54: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x182d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182d58: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182d5c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x182d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182d60: 0x8ca60164  lw          $a2, 0x164($a1)
    ctx->pc = 0x182d60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 356)));
    // 0x182d64: 0x30c70001  andi        $a3, $a2, 0x1
    ctx->pc = 0x182d64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x182d68: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x182D68u;
    {
        const bool branch_taken_0x182d68 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x182d68) {
            ctx->pc = 0x182DA0u;
            return;
        }
    }
    ctx->pc = 0x182D70u;
    // 0x182d70: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x182d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182d74: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x182d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x182d78: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x182d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x182d7c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x182d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x182d80: 0x8c4200b8  lw          $v0, 0xB8($v0)
    ctx->pc = 0x182d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x182d84: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x182D84u;
    {
        const bool branch_taken_0x182d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182d84) {
            ctx->pc = 0x182DC8u;
            return;
        }
    }
    ctx->pc = 0x182D8Cu;
    // 0x182d8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x182d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182d90: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x182d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x182d94: 0xac4300b8  sw          $v1, 0xB8($v0)
    ctx->pc = 0x182d94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 3));
    // 0x182d98: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x182D98u;
    {
        const bool branch_taken_0x182d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182d98) {
            ctx->pc = 0x182DC8u;
            return;
        }
    }
    ctx->pc = 0x182DA0u;
}
