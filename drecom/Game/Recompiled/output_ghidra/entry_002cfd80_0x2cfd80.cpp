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

// Function: entry_002cfd80
// Address: 0x2cfd80 - 0x2cfdb8
void entry_002cfd80_0x2cfd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cfd80_0x2cfd80");
#endif

    ctx->pc = 0x2cfd80u;

    // 0x2cfd80: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cfd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cfd84: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cfd84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cfd88: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cfd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cfd8c: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2cfd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2cfd90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cfd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfd94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cfd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cfd98: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x2cfd98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2cfd9c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CFD9Cu;
    {
        const bool branch_taken_0x2cfd9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfd9c) {
            ctx->pc = 0x2CFDB8u;
            return;
        }
    }
    ctx->pc = 0x2CFDA4u;
    // 0x2cfda4: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2cfda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2cfda8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2cfda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2cfdac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cfdacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfdb0: 0x0  nop
    ctx->pc = 0x2cfdb0u;
    // NOP
    // 0x2cfdb4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2cfdb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->pc = 0x2cfdb8u;
}
