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

// Function: entry_0016f0c8
// Address: 0x16f0c8 - 0x16f160
void entry_0016f0c8_0x16f0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f0c8_0x16f0c8");
#endif

    ctx->pc = 0x16f0c8u;

    // 0x16f0c8: 0xafb500d0  sw          $s5, 0xD0($sp)
    ctx->pc = 0x16f0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 21));
    // 0x16f0cc: 0xae35000c  sw          $s5, 0xC($s1)
    ctx->pc = 0x16f0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
    // 0x16f0d0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x16f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x16f0d4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x16f0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x16f0d8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x16f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16f0dc: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x16f0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x16f0e0: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x16f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16f0e4: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x16f0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x16f0e8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x16f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16f0ec: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x16f0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x16f0f0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x16f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x16f0f4: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x16f0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x16f0f8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x16f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16f0fc: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x16f0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x16f100: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x16f100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16f104: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x16f104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x16f108: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x16f108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x16f10c: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x16f10cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x16f110: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x16f110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16f114: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x16f114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x16f118: 0x260201ac  addiu       $v0, $s0, 0x1AC
    ctx->pc = 0x16f118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 428));
    // 0x16f11c: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x16f11cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x16f120: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x16f120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x16f124: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x16f124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x16f128: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x16F128u;
    {
        const bool branch_taken_0x16f128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f128) {
            ctx->pc = 0x16F160u;
            return;
        }
    }
    ctx->pc = 0x16F130u;
    // 0x16f130: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x16f130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x16f134: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x16f134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x16f138: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x16f138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16f13c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16f140: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x16f140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x16f144: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16f144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16f148: 0x94420012  lhu         $v0, 0x12($v0)
    ctx->pc = 0x16f148u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x16f14c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16f14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16f150: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x16f150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x16f154: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16f154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16f158: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x16f158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x16f15c: 0x0  nop
    ctx->pc = 0x16f15cu;
    // NOP
    ctx->pc = 0x16f160u;
}
