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

// Function: entry_002f601c
// Address: 0x2f601c - 0x2f6064
void entry_002f601c_0x2f601c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f601c_0x2f601c");
#endif

    ctx->pc = 0x2f601cu;

    // 0x2f601c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f601cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f6020: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2f6020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f6024: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f6024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6028: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F6028u;
    {
        const bool branch_taken_0x2f6028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f6028) {
            ctx->pc = 0x2F6064u;
            return;
        }
    }
    ctx->pc = 0x2F6030u;
    // 0x2f6030: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x2f6030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x2f6034: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f6034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f6038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f6038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f603c: 0x0  nop
    ctx->pc = 0x2f603cu;
    // NOP
    // 0x2f6040: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2f6040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2f6044: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x2f6044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x2f6048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f6048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f604c: 0x0  nop
    ctx->pc = 0x2f604cu;
    // NOP
    // 0x2f6050: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2f6050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2f6054: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2f6054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2f6058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f6058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f605c: 0x0  nop
    ctx->pc = 0x2f605cu;
    // NOP
    // 0x2f6060: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2f6060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->pc = 0x2f6064u;
}
