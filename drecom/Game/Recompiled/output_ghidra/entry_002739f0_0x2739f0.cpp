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

// Function: entry_002739f0
// Address: 0x2739f0 - 0x273a38
void entry_002739f0_0x2739f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002739f0_0x2739f0");
#endif

    ctx->pc = 0x2739f0u;

    // 0x2739f0: 0x1219c0  sll         $v1, $s2, 7
    ctx->pc = 0x2739f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x2739f4: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x2739f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2739f8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2739f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2739fc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2739fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273a00: 0xc4611830  lwc1        $f1, 0x1830($v1)
    ctx->pc = 0x273a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273a04: 0x3c034498  lui         $v1, 0x4498
    ctx->pc = 0x273a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17560 << 16));
    // 0x273a08: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x273a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x273a0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x273a0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273a10: 0x0  nop
    ctx->pc = 0x273a10u;
    // NOP
    // 0x273a14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x273a14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273a18: 0x0  nop
    ctx->pc = 0x273a18u;
    // NOP
    // 0x273a1c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x273A1Cu;
    {
        const bool branch_taken_0x273a1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x273a1c) {
            ctx->pc = 0x273A38u;
            return;
        }
    }
    ctx->pc = 0x273A24u;
    // 0x273a24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x273a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273a28: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x273a28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x273a2c: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x273a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x273a30: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x273a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273a34: 0xa0651b30  sb          $a1, 0x1B30($v1)
    ctx->pc = 0x273a34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6960), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x273a38u;
}
