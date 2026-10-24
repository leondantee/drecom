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

// Function: entry_00363250
// Address: 0x363250 - 0x3632d0
void entry_00363250_0x363250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00363250_0x363250");
#endif

    ctx->pc = 0x363250u;

    // 0x363250: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x363250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363254: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x363254u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x363258: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x363258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x36325c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x36325cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x363260: 0x4410043  bgez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x363260u;
    {
        const bool branch_taken_0x363260 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x363260) {
            ctx->pc = 0x363370u;
            return;
        }
    }
    ctx->pc = 0x363268u;
    // 0x363268: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x363268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x36326c: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x36326cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x363270: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x363270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x363274: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x363274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x363278: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x363278u;
    {
        const bool branch_taken_0x363278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x363278) {
            ctx->pc = 0x3632D0u;
            return;
        }
    }
    ctx->pc = 0x363280u;
    // 0x363280: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x363280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x363284: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x363284u;
    {
        const bool branch_taken_0x363284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x363284) {
            ctx->pc = 0x3632D0u;
            return;
        }
    }
    ctx->pc = 0x36328Cu;
    // 0x36328c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x36328cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x363290: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x363290u;
    {
        const bool branch_taken_0x363290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x363290) {
            ctx->pc = 0x3632D0u;
            return;
        }
    }
    ctx->pc = 0x363298u;
    // 0x363298: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x363298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36329c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x36329Cu;
    {
        const bool branch_taken_0x36329c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36329c) {
            ctx->pc = 0x3632D0u;
            return;
        }
    }
    ctx->pc = 0x3632A4u;
    // 0x3632a4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3632a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3632a8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3632A8u;
    {
        const bool branch_taken_0x3632a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3632a8) {
            ctx->pc = 0x3632D0u;
            return;
        }
    }
    ctx->pc = 0x3632B0u;
    // 0x3632b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3632b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3632b4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3632B4u;
    {
        const bool branch_taken_0x3632b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3632b4) {
            ctx->pc = 0x3632D0u;
            return;
        }
    }
    ctx->pc = 0x3632BCu;
    // 0x3632bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3632bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3632c0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3632C0u;
    {
        const bool branch_taken_0x3632c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3632c0) {
            ctx->pc = 0x3632D0u;
            return;
        }
    }
    ctx->pc = 0x3632C8u;
    // 0x3632c8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x3632C8u;
    {
        const bool branch_taken_0x3632c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3632c8) {
            ctx->pc = 0x3632D0u;
            return;
        }
    }
    ctx->pc = 0x3632D0u;
}
