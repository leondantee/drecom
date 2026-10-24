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

// Function: entry_0037c7e4
// Address: 0x37c7e4 - 0x37c814
void entry_0037c7e4_0x37c7e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037c7e4_0x37c7e4");
#endif

    ctx->pc = 0x37c7e4u;

    // 0x37c7e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37c7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c7e8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x37c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x37c7ec: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x37c7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x37c7f0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x37c7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x37c7f4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x37c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x37c7f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37c7f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c7fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x37c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c800: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x37c800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x37c804: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37c804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c808: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x37c808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x37c80c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37c810: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x37c810u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x37c814u;
}
