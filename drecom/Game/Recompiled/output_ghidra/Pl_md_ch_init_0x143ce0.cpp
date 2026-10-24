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

// Function: Pl_md_ch_init
// Address: 0x143ce0 - 0x143d64
void Pl_md_ch_init_0x143ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_md_ch_init_0x143ce0");
#endif

    switch (ctx->pc) {
        case 0x143d24u: goto label_143d24;
        case 0x143d30u: goto label_143d30;
        default: break;
    }

    ctx->pc = 0x143ce0u;

    // 0x143ce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x143ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x143ce4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x143ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x143ce8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143cec: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x143cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x143cf0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x143cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x143cf4: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x143cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x143cf8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x143cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x143cfc: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x143cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x143d00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x143d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x143d04: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x143d04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDC5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDC5Cu, _value); } while (0);
    // 0x143d08: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x143d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x143d0c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x143d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x143d10: 0x24062a00  addiu       $a2, $zero, 0x2A00
    ctx->pc = 0x143d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10752));
    // 0x143d14: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x143d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x143d18: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x143d18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x143d1c: 0xc05e858  jal         func_17A160
    ctx->pc = 0x143D1Cu;
    SET_GPR_U32(ctx, 31, 0x143D24u);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x143D1Cu, 0x143D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143D24u;
label_143d24:
    // 0x143d24: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x143d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x143d28: 0xc05e964  jal         func_17A590
    ctx->pc = 0x143D28u;
    SET_GPR_U32(ctx, 31, 0x143D30u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x143D28u, 0x143D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143D30u;
label_143d30:
    // 0x143d30: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x143d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143d34: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x143d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x143d38: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x143d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143d3c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x143d3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143d40: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x143d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x143d44: 0xa6030052  sh          $v1, 0x52($s0)
    ctx->pc = 0x143d44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x143d48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x143d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x143d4c: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x143d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x143d50: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x143d50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143d54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143d58: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x143d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x143d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x143D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143D64u;
}
