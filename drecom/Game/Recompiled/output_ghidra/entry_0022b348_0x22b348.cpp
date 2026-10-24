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

// Function: entry_0022b348
// Address: 0x22b348 - 0x22b384
void entry_0022b348_0x22b348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b348_0x22b348");
#endif

    ctx->pc = 0x22b348u;

    // 0x22b348: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b34c: 0x94630a00  lhu         $v1, 0xA00($v1)
    ctx->pc = 0x22b34cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
    // 0x22b350: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x22b350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x22b354: 0x2864007b  slti        $a0, $v1, 0x7B
    ctx->pc = 0x22b354u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)123) ? 1 : 0);
    // 0x22b358: 0x148001a6  bnez        $a0, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x22B358u;
    {
        const bool branch_taken_0x22b358 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b358) {
            ctx->pc = 0x22B9F4u;
            return;
        }
    }
    ctx->pc = 0x22B360u;
    // 0x22b360: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x22b360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b364: 0xc4a10124  lwc1        $f1, 0x124($a1)
    ctx->pc = 0x22b364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b368: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x22b368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x22b36c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22b36cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b370: 0x0  nop
    ctx->pc = 0x22b370u;
    // NOP
    // 0x22b374: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22b374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22b378: 0xe4a00124  swc1        $f0, 0x124($a1)
    ctx->pc = 0x22b378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 292), bits); }
    // 0x22b37c: 0x1000019d  b           . + 4 + (0x19D << 2)
    ctx->pc = 0x22B37Cu;
    {
        const bool branch_taken_0x22b37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b37c) {
            ctx->pc = 0x22B9F4u;
            return;
        }
    }
    ctx->pc = 0x22B384u;
}
