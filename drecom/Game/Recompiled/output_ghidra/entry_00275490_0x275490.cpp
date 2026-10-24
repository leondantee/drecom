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

// Function: entry_00275490
// Address: 0x275490 - 0x2754d8
void entry_00275490_0x275490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275490_0x275490");
#endif

    ctx->pc = 0x275490u;

    // 0x275490: 0x1219c0  sll         $v1, $s2, 7
    ctx->pc = 0x275490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x275494: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x275494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x275498: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x275498u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x27549c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27549cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2754a0: 0xc4611830  lwc1        $f1, 0x1830($v1)
    ctx->pc = 0x2754a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2754a4: 0x3c034498  lui         $v1, 0x4498
    ctx->pc = 0x2754a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17560 << 16));
    // 0x2754a8: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x2754a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x2754ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2754acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2754b0: 0x0  nop
    ctx->pc = 0x2754b0u;
    // NOP
    // 0x2754b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2754b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2754b8: 0x0  nop
    ctx->pc = 0x2754b8u;
    // NOP
    // 0x2754bc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2754BCu;
    {
        const bool branch_taken_0x2754bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2754bc) {
            ctx->pc = 0x2754D8u;
            return;
        }
    }
    ctx->pc = 0x2754C4u;
    // 0x2754c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2754c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2754c8: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x2754c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x2754cc: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x2754ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2754d0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2754d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2754d4: 0xa0651b30  sb          $a1, 0x1B30($v1)
    ctx->pc = 0x2754d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6960), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x2754d8u;
}
