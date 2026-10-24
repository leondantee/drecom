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

// Function: caseD_0
// Address: 0x162638 - 0x162690
void caseD_0_0x162638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x162638");
#endif

    ctx->pc = 0x162638u;

    // 0x162638: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x162638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x16263c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16263cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x162640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162644: 0x0  nop
    ctx->pc = 0x162644u;
    // NOP
    // 0x162648: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x162648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x16264c: 0x3c02c016  lui         $v0, 0xC016
    ctx->pc = 0x16264cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49174 << 16));
    // 0x162650: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x162650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x162654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162658: 0x0  nop
    ctx->pc = 0x162658u;
    // NOP
    // 0x16265c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x16265cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x162660: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x162660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x162664: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x162664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x162668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16266c: 0x0  nop
    ctx->pc = 0x16266cu;
    // NOP
    // 0x162670: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x162670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x162674: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x162674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
    // 0x162678: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x162678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x16267c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16267cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162680: 0x0  nop
    ctx->pc = 0x162680u;
    // NOP
    // 0x162684: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x162684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x162688: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x162688u;
    {
        const bool branch_taken_0x162688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162688) {
            ctx->pc = 0x1629C0u;
            return;
        }
    }
    ctx->pc = 0x162690u;
}
