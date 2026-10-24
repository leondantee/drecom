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

// Function: entry_001d0890
// Address: 0x1d0890 - 0x1d08d4
void entry_001d0890_0x1d0890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0890_0x1d0890");
#endif

    ctx->pc = 0x1d0890u;

    // 0x1d0890: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0890u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0894: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0898: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1d0898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x1d089c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d089cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d08a0: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1d08a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d08a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d08a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d08a8: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1d08a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
    // 0x1d08ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d08acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d08b0: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1d08b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d08b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d08b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d08b8: 0xe4801570  swc1        $f0, 0x1570($a0)
    ctx->pc = 0x1d08b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5488), bits); }
    // 0x1d08bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d08bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d08c0: 0x8c631b6c  lw          $v1, 0x1B6C($v1)
    ctx->pc = 0x1d08c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
    // 0x1d08c4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D08C4u;
    {
        const bool branch_taken_0x1d08c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d08c4) {
            ctx->pc = 0x1D08D4u;
            return;
        }
    }
    ctx->pc = 0x1D08CCu;
    // 0x1d08cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d08ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d08d0: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1d08d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1d08d4u;
}
