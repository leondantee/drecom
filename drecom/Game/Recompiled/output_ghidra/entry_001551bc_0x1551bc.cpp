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

// Function: entry_001551bc
// Address: 0x1551bc - 0x155204
void entry_001551bc_0x1551bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001551bc_0x1551bc");
#endif

    ctx->pc = 0x1551bcu;

    // 0x1551bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1551bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1551c0: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x1551c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1551c4: 0xc48101c0  lwc1        $f1, 0x1C0($a0)
    ctx->pc = 0x1551c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1551c8: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1551c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1551cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1551ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1551d0: 0x0  nop
    ctx->pc = 0x1551d0u;
    // NOP
    // 0x1551d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1551d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1551d8: 0xe48001c0  swc1        $f0, 0x1C0($a0)
    ctx->pc = 0x1551d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 448), bits); }
    // 0x1551dc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1551dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1551e0: 0x84831250  lh          $v1, 0x1250($a0)
    ctx->pc = 0x1551e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4688)));
    // 0x1551e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1551e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1551e8: 0xa4831250  sh          $v1, 0x1250($a0)
    ctx->pc = 0x1551e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4688), (uint16_t)GPR_U32(ctx, 3));
    // 0x1551ec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1551ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1551f0: 0x84631250  lh          $v1, 0x1250($v1)
    ctx->pc = 0x1551f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4688)));
    // 0x1551f4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1551F4u;
    {
        const bool branch_taken_0x1551f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1551f4) {
            ctx->pc = 0x155204u;
            return;
        }
    }
    ctx->pc = 0x1551FCu;
    // 0x1551fc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1551fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155200: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x155200u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x155204u;
}
