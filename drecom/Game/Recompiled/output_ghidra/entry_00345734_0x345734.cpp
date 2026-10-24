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

// Function: entry_00345734
// Address: 0x345734 - 0x3457bc
void entry_00345734_0x345734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00345734_0x345734");
#endif

    ctx->pc = 0x345734u;

    // 0x345734: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x345734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345738: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x345738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34573c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x34573cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x345740: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x345740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x345744: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x345744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x345748: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x345748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34574c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x34574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345750: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x345750u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x345754: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x345754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345758: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x345758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34575c: 0x24510960  addiu       $s1, $v0, 0x960
    ctx->pc = 0x34575cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x345760: 0x26230150  addiu       $v1, $s1, 0x150
    ctx->pc = 0x345760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x345764: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x345764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x345768: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x345768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34576c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34576cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x345770: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x345770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345774: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x345774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x345778: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x345778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x34577c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x34577cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x345780: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x345780u;
    {
        const bool branch_taken_0x345780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x345780) {
            ctx->pc = 0x3457BCu;
            return;
        }
    }
    ctx->pc = 0x345788u;
    // 0x345788: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x345788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34578c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34578cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x345790: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x345790u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x345794: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345798: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x345798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34579c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34579cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3457a0: 0xa043006f  sb          $v1, 0x6F($v0)
    ctx->pc = 0x3457a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 3));
    // 0x3457a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3457a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3457a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3457a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3457ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3457acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3457b0: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x3457b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x3457b4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3457B4u;
    {
        const bool branch_taken_0x3457b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3457b4) {
            ctx->pc = 0x3457E4u;
            return;
        }
    }
    ctx->pc = 0x3457BCu;
}
