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

// Function: entry_002c4150
// Address: 0x2c4150 - 0x2c41d4
void entry_002c4150_0x2c4150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c4150_0x2c4150");
#endif

    ctx->pc = 0x2c4150u;

    // 0x2c4150: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c4150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c4154: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x2c4154u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x2c4158: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2c4158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2c415c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2c415cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c4160: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c4160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c4164: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x2c4164u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x2c4168: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c4168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c416c: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x2c416cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x2c4170: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x2c4170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x2c4174: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c4174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2c4178: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2c4178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2c417c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c417cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c4180: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x2c4180u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x2c4184: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c4184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4188: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x2c4188u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x2c418c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2c418cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2c4190: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2c4190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c4194: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C4194u;
    {
        const bool branch_taken_0x2c4194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c4194) {
            ctx->pc = 0x2C4208u;
            return;
        }
    }
    ctx->pc = 0x2C419Cu;
    // 0x2c419c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2c419cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c41a0: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C41A0u;
    {
        const bool branch_taken_0x2c41a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c41a0) {
            ctx->pc = 0x2C4208u;
            return;
        }
    }
    ctx->pc = 0x2C41A8u;
    // 0x2c41a8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2c41a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2c41ac: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C41ACu;
    {
        const bool branch_taken_0x2c41ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c41ac) {
            ctx->pc = 0x2C4208u;
            return;
        }
    }
    ctx->pc = 0x2C41B4u;
    // 0x2c41b4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2c41b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c41b8: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C41B8u;
    {
        const bool branch_taken_0x2c41b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c41b8) {
            ctx->pc = 0x2C4208u;
            return;
        }
    }
    ctx->pc = 0x2C41C0u;
    // 0x2c41c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c41c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c41c4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C41C4u;
    {
        const bool branch_taken_0x2c41c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c41c4) {
            ctx->pc = 0x2C41D4u;
            return;
        }
    }
    ctx->pc = 0x2C41CCu;
    // 0x2c41cc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2C41CCu;
    {
        const bool branch_taken_0x2c41cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c41cc) {
            ctx->pc = 0x2C41D4u;
            return;
        }
    }
    ctx->pc = 0x2C41D4u;
}
