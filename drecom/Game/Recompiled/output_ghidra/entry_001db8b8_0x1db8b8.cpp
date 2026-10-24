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

// Function: entry_001db8b8
// Address: 0x1db8b8 - 0x1db940
void entry_001db8b8_0x1db8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db8b8_0x1db8b8");
#endif

    ctx->pc = 0x1db8b8u;

    // 0x1db8b8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1db8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1db8bc: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1db8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1db8c0: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1db8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1db8c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1db8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db8c8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1db8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1db8cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1db8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db8d0: 0x3c112000  lui         $s1, 0x2000
    ctx->pc = 0x1db8d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8192 << 16));
    // 0x1db8d4: 0x518825  or          $s1, $v0, $s1
    ctx->pc = 0x1db8d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x1db8d8: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1db8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db8dc: 0xfc510030  sd          $s1, 0x30($v0)
    ctx->pc = 0x1db8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 17));
    // 0x1db8e0: 0x8fb100d4  lw          $s1, 0xD4($sp)
    ctx->pc = 0x1db8e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db8e4: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x1db8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x1db8e8: 0x8fb100d4  lw          $s1, 0xD4($sp)
    ctx->pc = 0x1db8e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db8ec: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x1db8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x1db8f0: 0x8fb100f8  lw          $s1, 0xF8($sp)
    ctx->pc = 0x1db8f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1db8f4: 0xafb100bc  sw          $s1, 0xBC($sp)
    ctx->pc = 0x1db8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 17));
    // 0x1db8f8: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1db8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1db8fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1db8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db900: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1db900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1db904: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db908: 0xac510038  sw          $s1, 0x38($v0)
    ctx->pc = 0x1db908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 17));
    // 0x1db90c: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1db90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1db910: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1db910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1db914: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x1db914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
    // 0x1db918: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1db918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1db91c: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x1db91cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1db920: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1db920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1db924: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x1db924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x1db928: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1db928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1db92c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1db92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1db930: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB930u;
    {
        const bool branch_taken_0x1db930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1db930) {
            ctx->pc = 0x1DB940u;
            return;
        }
    }
    ctx->pc = 0x1DB938u;
    // 0x1db938: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1db938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1db93c: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x1db93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    ctx->pc = 0x1db940u;
}
