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

// Function: entry_00220954
// Address: 0x220954 - 0x2209d8
void entry_00220954_0x220954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220954_0x220954");
#endif

    ctx->pc = 0x220954u;

    // 0x220954: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x220954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x220958: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x220958u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x22095c: 0x30830200  andi        $v1, $a0, 0x200
    ctx->pc = 0x22095cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x220960: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x220960u;
    {
        const bool branch_taken_0x220960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x220960) {
            ctx->pc = 0x220A2Cu;
            return;
        }
    }
    ctx->pc = 0x220968u;
    // 0x220968: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x220968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x22096c: 0x944211f4  lhu         $v0, 0x11F4($v0)
    ctx->pc = 0x22096cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4596)));
    // 0x220970: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x220970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x220974: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x220974u;
    {
        const bool branch_taken_0x220974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x220974) {
            ctx->pc = 0x2209D8u;
            return;
        }
    }
    ctx->pc = 0x22097Cu;
    // 0x22097c: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x22097cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220980: 0x844411f2  lh          $a0, 0x11F2($v0)
    ctx->pc = 0x220980u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x220984: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x220984u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
    // 0x220988: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x220988u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x22098c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x22098cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x220990: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x220990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x220994: 0x34626667  ori         $v0, $v1, 0x6667
    ctx->pc = 0x220994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x220998: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x220998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x22099c: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x22099cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2209a0: 0x0  nop
    ctx->pc = 0x2209a0u;
    // NOP
    // 0x2209a4: 0x2010  mfhi        $a0
    ctx->pc = 0x2209a4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2209a8: 0x43083  sra         $a2, $a0, 2
    ctx->pc = 0x2209a8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 2));
    // 0x2209ac: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x2209acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2209b0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2209b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2209b4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2209b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2209b8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2209b8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2209bc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2209bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2209c0: 0x8423ef68  lh          $v1, -0x1098($at)
    ctx->pc = 0x2209c0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF68u));
    // 0x2209c4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2209c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2209c8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2209c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2209cc: 0xa424ef68  sh          $a0, -0x1098($at)
    ctx->pc = 0x2209ccu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3EEF68u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEF68u, _value); } while (0);
    // 0x2209d0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2209D0u;
    {
        const bool branch_taken_0x2209d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2209d0) {
            ctx->pc = 0x220A2Cu;
            return;
        }
    }
    ctx->pc = 0x2209D8u;
}
