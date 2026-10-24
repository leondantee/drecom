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

// Function: entry_00129110
// Address: 0x129110 - 0x129178
void entry_00129110_0x129110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129110_0x129110");
#endif

    ctx->pc = 0x129110u;

    // 0x129110: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x129110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x129114: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x129114u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x129118: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x129118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x12911c: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x12911Cu;
    {
        const bool branch_taken_0x12911c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12911c) {
            ctx->pc = 0x129178u;
            return;
        }
    }
    ctx->pc = 0x129124u;
    // 0x129124: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x129124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x129128: 0x8c236838  lw          $v1, 0x6838($at)
    ctx->pc = 0x129128u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6838u));
    // 0x12912c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x12912Cu;
    {
        const bool branch_taken_0x12912c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12912c) {
            ctx->pc = 0x129178u;
            return;
        }
    }
    ctx->pc = 0x129134u;
    // 0x129134: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x129134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x129138: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x129138u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x12913c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x12913cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x129140: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x129140u;
    {
        const bool branch_taken_0x129140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129140) {
            ctx->pc = 0x129178u;
            return;
        }
    }
    ctx->pc = 0x129148u;
    // 0x129148: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12914c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12914cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129150: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129150u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x129154: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x129154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x129158: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12915c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12915cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x129160: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129164: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129164u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x129168: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12916c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12916cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x129170: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129174: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x129178u;
}
