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

// Function: entry_0034cb68
// Address: 0x34cb68 - 0x34cc80
void entry_0034cb68_0x34cb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034cb68_0x34cb68");
#endif

    switch (ctx->pc) {
        case 0x34cbf8u: goto label_34cbf8;
        default: break;
    }

    ctx->pc = 0x34cb68u;

    // 0x34cb68: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cb6c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34cb6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34cb70: 0x106000d7  beqz        $v1, . + 4 + (0xD7 << 2)
    ctx->pc = 0x34CB70u;
    {
        const bool branch_taken_0x34cb70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cb70) {
            ctx->pc = 0x34CED0u;
            return;
        }
    }
    ctx->pc = 0x34CB78u;
    // 0x34cb78: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34cb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cb7c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34cb80: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34cb80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34cb84: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x34cb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34cb88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34cb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34cb8c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x34cb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x34cb90: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34cb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34cb94: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x34cb94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x34cb98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cb9c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cba0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x34cba0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x34cba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cba8: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34cba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cbac: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x34cbacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x34cbb0: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34cbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cbb4: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x34cbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34cbb8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cbbc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x34cbbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34cbc0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cbc4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x34cbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x34cbc8: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x34cbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34cbcc: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cbd0: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x34cbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34cbd4: 0xa4a30068  sh          $v1, 0x68($a1)
    ctx->pc = 0x34cbd4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 104), (uint16_t)GPR_U32(ctx, 3));
    // 0x34cbd8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cbdc: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34cbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34cbe0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34cbe4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x34cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34cbe8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34cbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34cbec: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x34cbecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x34cbf0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34CBF0u;
    SET_GPR_U32(ctx, 31, 0x34CBF8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34CBF0u, 0x34CBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CBF8u;
label_34cbf8:
    // 0x34cbf8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34cbf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34cbfc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x34cbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34cc00: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x34cc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x34cc04: 0x246500fa  addiu       $a1, $v1, 0xFA
    ctx->pc = 0x34cc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 250));
    // 0x34cc08: 0x53c3c  dsll32      $a3, $a1, 16
    ctx->pc = 0x34cc08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 16));
    // 0x34cc0c: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x34cc0cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x34cc10: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cc14: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34cc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cc18: 0xa4870034  sh          $a3, 0x34($a0)
    ctx->pc = 0x34cc18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 7));
    // 0x34cc1c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cc20: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34cc20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cc24: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x34cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34cc28: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x34cc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x34cc2c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x34cc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x34cc30: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x34cc34: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34cc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cc38: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34cc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34cc3c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x34cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34cc40: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x34cc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x34cc44: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34CC44u;
    {
        const bool branch_taken_0x34cc44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cc44) {
            ctx->pc = 0x34CC80u;
            return;
        }
    }
    ctx->pc = 0x34CC4Cu;
    // 0x34cc4c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34cc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cc50: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x34cc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34cc54: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x34cc54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34cc58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34cc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cc5c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34cc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cc60: 0x24a71330  addiu       $a3, $a1, 0x1330
    ctx->pc = 0x34cc60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x34cc64: 0xa0e3006f  sb          $v1, 0x6F($a3)
    ctx->pc = 0x34cc64u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 111), (uint8_t)GPR_U32(ctx, 3));
    // 0x34cc68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34cc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34cc6c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34cc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34cc70: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x34cc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34cc74: 0xa0a30072  sb          $v1, 0x72($a1)
    ctx->pc = 0x34cc74u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x34cc78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x34CC78u;
    {
        const bool branch_taken_0x34cc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cc78) {
            ctx->pc = 0x34CCA8u;
            return;
        }
    }
    ctx->pc = 0x34CC80u;
}
