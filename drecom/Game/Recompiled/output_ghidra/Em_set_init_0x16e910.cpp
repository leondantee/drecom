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

// Function: Em_set_init
// Address: 0x16e910 - 0x16ea30
void Em_set_init_0x16e910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_set_init_0x16e910");
#endif

    switch (ctx->pc) {
        case 0x16e9a8u: goto label_16e9a8;
        case 0x16e9d8u: goto label_16e9d8;
        default: break;
    }

    ctx->pc = 0x16e910u;

    // 0x16e910: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16e910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16e914: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x16e914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x16e918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16e918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16e91c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16e91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16e920: 0xa3a40038  sb          $a0, 0x38($sp)
    ctx->pc = 0x16e920u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 4));
    // 0x16e924: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16e924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16e928: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x16e928u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x16e92c: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x16e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x16e930: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x16e930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16e934: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16e934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16e938: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16e938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16e93c: 0xac220ae8  sw          $v0, 0xAE8($at)
    ctx->pc = 0x16e93cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x16e940: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16e940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16e944: 0x8c300ae8  lw          $s0, 0xAE8($at)
    ctx->pc = 0x16e944u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x16e948: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e94c: 0xac30bcf4  sw          $s0, -0x430C($at)
    ctx->pc = 0x16e94cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x47BCF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BCF4u, _value); } while (0);
    // 0x16e950: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x16e950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x16e954: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x16e954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x16e958: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16e958u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x16e95c: 0x24421430  addiu       $v0, $v0, 0x1430
    ctx->pc = 0x16e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5168));
    // 0x16e960: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x16e960u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x16e964: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x16e964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x16e968: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16e968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e96c: 0xa60210a6  sh          $v0, 0x10A6($s0)
    ctx->pc = 0x16e96cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4262), (uint16_t)GPR_U32(ctx, 2));
    // 0x16e970: 0xa20010a9  sb          $zero, 0x10A9($s0)
    ctx->pc = 0x16e970u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4265), (uint8_t)GPR_U32(ctx, 0));
    // 0x16e974: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x16e974u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x16e978: 0x300200ff  andi        $v0, $zero, 0xFF
    ctx->pc = 0x16e978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x16e97c: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x16e97cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x16e980: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16e980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16e984: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x16e984u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x16e988: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16e988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16e98c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x16e98cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x16e990: 0xa20009e5  sb          $zero, 0x9E5($s0)
    ctx->pc = 0x16e990u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2533), (uint8_t)GPR_U32(ctx, 0));
    // 0x16e994: 0x300200ff  andi        $v0, $zero, 0xFF
    ctx->pc = 0x16e994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x16e998: 0xa20209e6  sb          $v0, 0x9E6($s0)
    ctx->pc = 0x16e998u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2534), (uint8_t)GPR_U32(ctx, 2));
    // 0x16e99c: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x16e99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x16e9a0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x16E9A0u;
    SET_GPR_U32(ctx, 31, 0x16E9A8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x16E9A0u, 0x16E9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E9A8u;
label_16e9a8:
    // 0x16e9a8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x16e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x16e9ac: 0x2463dce0  addiu       $v1, $v1, -0x2320
    ctx->pc = 0x16e9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x16e9b0: 0xae031250  sw          $v1, 0x1250($s0)
    ctx->pc = 0x16e9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4688), GPR_U32(ctx, 3));
    // 0x16e9b4: 0xae001270  sw          $zero, 0x1270($s0)
    ctx->pc = 0x16e9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4720), GPR_U32(ctx, 0));
    // 0x16e9b8: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x16e9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x16e9bc: 0xa2030013  sb          $v1, 0x13($s0)
    ctx->pc = 0x16e9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x16e9c0: 0xa20011ed  sb          $zero, 0x11ED($s0)
    ctx->pc = 0x16e9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4589), (uint8_t)GPR_U32(ctx, 0));
    // 0x16e9c4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x16e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x16e9c8: 0xa20311ec  sb          $v1, 0x11EC($s0)
    ctx->pc = 0x16e9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4588), (uint8_t)GPR_U32(ctx, 3));
    // 0x16e9cc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x16e9ccu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16e9d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16E9D0u;
    {
        const bool branch_taken_0x16e9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e9d0) {
            ctx->pc = 0x16EA00u;
            goto label_16ea00;
        }
    }
    ctx->pc = 0x16E9D8u;
label_16e9d8:
    // 0x16e9d8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e9dc: 0x8c25bcf4  lw          $a1, -0x430C($at)
    ctx->pc = 0x16e9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x47BCF4u));
    // 0x16e9e0: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x16e9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x16e9e4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x16e9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16e9e8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16e9ec: 0x2463bb40  addiu       $v1, $v1, -0x44C0
    ctx->pc = 0x16e9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949696));
    // 0x16e9f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16e9f4: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x16e9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x16e9f8: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x16e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16e9fc: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x16e9fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_16ea00:
    // 0x16ea00: 0x3224ffff  andi        $a0, $s1, 0xFFFF
    ctx->pc = 0x16ea00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x16ea04: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x16ea04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16ea08: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16ea08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16ea0c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x16ea0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16ea10: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x16EA10u;
    {
        const bool branch_taken_0x16ea10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ea10) {
            ctx->pc = 0x16E9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16e9d8;
        }
    }
    ctx->pc = 0x16EA18u;
    // 0x16ea18: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x16ea18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ea1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16ea1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ea20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16ea20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ea24: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x16ea24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16ea28: 0x3e00008  jr          $ra
    ctx->pc = 0x16EA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EA30u;
}
