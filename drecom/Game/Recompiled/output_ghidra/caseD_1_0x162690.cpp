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

// Function: caseD_1
// Address: 0x162690 - 0x1626e8
void caseD_1_0x162690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x162690");
#endif

    ctx->pc = 0x162690u;

    // 0x162690: 0x3c02bf7b  lui         $v0, 0xBF7B
    ctx->pc = 0x162690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49019 << 16));
    // 0x162694: 0x344253d2  ori         $v0, $v0, 0x53D2
    ctx->pc = 0x162694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21458);
    // 0x162698: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16269c: 0x0  nop
    ctx->pc = 0x16269cu;
    // NOP
    // 0x1626a0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1626a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1626a4: 0x3c02c016  lui         $v0, 0xC016
    ctx->pc = 0x1626a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49174 << 16));
    // 0x1626a8: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x1626a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x1626ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1626acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1626b0: 0x0  nop
    ctx->pc = 0x1626b0u;
    // NOP
    // 0x1626b4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1626b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1626b8: 0x3c023f7b  lui         $v0, 0x3F7B
    ctx->pc = 0x1626b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16251 << 16));
    // 0x1626bc: 0x344253d2  ori         $v0, $v0, 0x53D2
    ctx->pc = 0x1626bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21458);
    // 0x1626c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1626c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1626c4: 0x0  nop
    ctx->pc = 0x1626c4u;
    // NOP
    // 0x1626c8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1626c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1626cc: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x1626ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
    // 0x1626d0: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x1626d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x1626d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1626d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1626d8: 0x0  nop
    ctx->pc = 0x1626d8u;
    // NOP
    // 0x1626dc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1626dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1626e0: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x1626E0u;
    {
        const bool branch_taken_0x1626e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1626e0) {
            ctx->pc = 0x1629C0u;
            return;
        }
    }
    ctx->pc = 0x1626E8u;
}
