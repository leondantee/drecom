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

// Function: entry_0016ec08
// Address: 0x16ec08 - 0x16ec58
void entry_0016ec08_0x16ec08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ec08_0x16ec08");
#endif

    ctx->pc = 0x16ec08u;

    // 0x16ec08: 0x97a200dc  lhu         $v0, 0xDC($sp)
    ctx->pc = 0x16ec08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x16ec0c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x16ec0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16ec10: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x16ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16ec14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ec18: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x16ec18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16ec1c: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x16EC1Cu;
    {
        const bool branch_taken_0x16ec1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ec1c) {
            ctx->pc = 0x16EBBCu;
            return;
        }
    }
    ctx->pc = 0x16EC24u;
    // 0x16ec24: 0x8ee20a68  lw          $v0, 0xA68($s7)
    ctx->pc = 0x16ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x16ec28: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x16ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x16ec2c: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x16ec2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16ec30: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x16ec30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x16ec34: 0xaee20a68  sw          $v0, 0xA68($s7)
    ctx->pc = 0x16ec34u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 2));
    // 0x16ec38: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x16ec38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16ec3c: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x16ec3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x16ec40: 0x70c0a628  paddub      $s4, $a2, $zero
    ctx->pc = 0x16ec40u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x16ec44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16ec44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16ec48: 0xa0200e05  sb          $zero, 0xE05($at)
    ctx->pc = 0x16ec48u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D0E05u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D0E05u, _value); } while (0);
    // 0x16ec4c: 0xa7a000dc  sh          $zero, 0xDC($sp)
    ctx->pc = 0x16ec4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 220), (uint16_t)GPR_U32(ctx, 0));
    // 0x16ec50: 0x10000287  b           . + 4 + (0x287 << 2)
    ctx->pc = 0x16EC50u;
    {
        const bool branch_taken_0x16ec50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ec50) {
            ctx->pc = 0x16F670u;
            return;
        }
    }
    ctx->pc = 0x16EC58u;
}
