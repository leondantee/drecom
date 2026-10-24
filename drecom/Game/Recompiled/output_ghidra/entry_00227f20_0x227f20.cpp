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

// Function: entry_00227f20
// Address: 0x227f20 - 0x227f80
void entry_00227f20_0x227f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00227f20_0x227f20");
#endif

    ctx->pc = 0x227f20u;

    // 0x227f20: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227f24: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x227f24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x227f28: 0x146001c1  bnez        $v1, . + 4 + (0x1C1 << 2)
    ctx->pc = 0x227F28u;
    {
        const bool branch_taken_0x227f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x227f28) {
            ctx->pc = 0x228630u;
            return;
        }
    }
    ctx->pc = 0x227F30u;
    // 0x227f30: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227f34: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x227f34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x227f38: 0x108001bd  beqz        $a0, . + 4 + (0x1BD << 2)
    ctx->pc = 0x227F38u;
    {
        const bool branch_taken_0x227f38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x227f38) {
            ctx->pc = 0x228630u;
            return;
        }
    }
    ctx->pc = 0x227F40u;
    // 0x227f40: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x227f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x227f44: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x227f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227f48: 0xa0c50002  sb          $a1, 0x2($a2)
    ctx->pc = 0x227f48u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x227f4c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x227f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x227f50: 0x8c271a50  lw          $a3, 0x1A50($at)
    ctx->pc = 0x227f50u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x227f54: 0x30e8ffff  andi        $t0, $a3, 0xFFFF
    ctx->pc = 0x227f54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x227f58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x227f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x227f5c: 0xac281a50  sw          $t0, 0x1A50($at)
    ctx->pc = 0x227f5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x5D1A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A50u, _value); } while (0);
    // 0x227f60: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x227f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x227f64: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227f68: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x227f68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x227f6c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x227f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x227f70: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x227f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x227f74: 0xa424ec66  sh          $a0, -0x139A($at)
    ctx->pc = 0x227f74u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3EEC66u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEC66u, _value); } while (0);
    // 0x227f78: 0x100001ad  b           . + 4 + (0x1AD << 2)
    ctx->pc = 0x227F78u;
    {
        const bool branch_taken_0x227f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227f78) {
            ctx->pc = 0x228630u;
            return;
        }
    }
    ctx->pc = 0x227F80u;
}
