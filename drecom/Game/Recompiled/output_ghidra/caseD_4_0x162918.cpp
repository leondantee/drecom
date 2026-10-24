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

// Function: caseD_4
// Address: 0x162918 - 0x162970
void caseD_4_0x162918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x162918");
#endif

    ctx->pc = 0x162918u;

    // 0x162918: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x162918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x16291c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16291cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x162920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162924: 0x0  nop
    ctx->pc = 0x162924u;
    // NOP
    // 0x162928: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x162928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x16292c: 0x3c02c016  lui         $v0, 0xC016
    ctx->pc = 0x16292cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49174 << 16));
    // 0x162930: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x162930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x162934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162938: 0x0  nop
    ctx->pc = 0x162938u;
    // NOP
    // 0x16293c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x16293cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x162940: 0x3c023f16  lui         $v0, 0x3F16
    ctx->pc = 0x162940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16150 << 16));
    // 0x162944: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x162944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x162948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16294c: 0x0  nop
    ctx->pc = 0x16294cu;
    // NOP
    // 0x162950: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x162950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x162954: 0x3c024023  lui         $v0, 0x4023
    ctx->pc = 0x162954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16419 << 16));
    // 0x162958: 0x34425ce2  ori         $v0, $v0, 0x5CE2
    ctx->pc = 0x162958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23778);
    // 0x16295c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16295cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162960: 0x0  nop
    ctx->pc = 0x162960u;
    // NOP
    // 0x162964: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x162964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x162968: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x162968u;
    {
        const bool branch_taken_0x162968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162968) {
            ctx->pc = 0x1629C0u;
            return;
        }
    }
    ctx->pc = 0x162970u;
}
