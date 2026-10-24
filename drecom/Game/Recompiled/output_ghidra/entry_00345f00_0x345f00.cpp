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

// Function: entry_00345f00
// Address: 0x345f00 - 0x345ff8
void entry_00345f00_0x345f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00345f00_0x345f00");
#endif

    switch (ctx->pc) {
        case 0x345f8cu: goto label_345f8c;
        default: break;
    }

    ctx->pc = 0x345f00u;

    // 0x345f00: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345f04: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x345f04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x345f08: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x345F08u;
    {
        const bool branch_taken_0x345f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x345f08) {
            ctx->pc = 0x346020u;
            return;
        }
    }
    ctx->pc = 0x345F10u;
    // 0x345f10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345f14: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345f18: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x345f18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x345f1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345f20: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345f24: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x345f24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x345f28: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345f2c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x345f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x345f30: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345f34: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x345f34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x345f38: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345f3c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x345f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x345f40: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x345f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x345f44: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345f48: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x345f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x345f4c: 0xa4430068  sh          $v1, 0x68($v0)
    ctx->pc = 0x345f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 104), (uint16_t)GPR_U32(ctx, 3));
    // 0x345f50: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345f54: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x345f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x345f58: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x345f58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x345f5c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x345f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x345f60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x345f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x345f64: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x345f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x345f68: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x345f68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x345f6c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345f70: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x345f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x345f74: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x345f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x345f78: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x345f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x345f7c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x345f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x345f80: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x345f80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x345f84: 0xc067694  jal         func_19DA50
    ctx->pc = 0x345F84u;
    SET_GPR_U32(ctx, 31, 0x345F8Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x345F84u, 0x345F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345F8Cu;
label_345f8c:
    // 0x345f8c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x345f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x345f90: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x345f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x345f94: 0x2463002d  addiu       $v1, $v1, 0x2D
    ctx->pc = 0x345f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x345f98: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x345f98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x345f9c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x345f9cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x345fa0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345fa4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x345fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x345fa8: 0xa4640034  sh          $a0, 0x34($v1)
    ctx->pc = 0x345fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 52), (uint16_t)GPR_U32(ctx, 4));
    // 0x345fac: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345fb0: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x345fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x345fb4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x345fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x345fb8: 0x30640008  andi        $a0, $v1, 0x8
    ctx->pc = 0x345fb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x345fbc: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x345FBCu;
    {
        const bool branch_taken_0x345fbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x345fbc) {
            ctx->pc = 0x345FF8u;
            return;
        }
    }
    ctx->pc = 0x345FC4u;
    // 0x345fc4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345fc8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x345fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x345fcc: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x345fccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x345fd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x345fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345fd4: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x345fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345fd8: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x345fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x345fdc: 0xa064006f  sb          $a0, 0x6F($v1)
    ctx->pc = 0x345fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 4));
    // 0x345fe0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x345fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345fe4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345fe8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x345fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x345fec: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x345fecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
    // 0x345ff0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x345FF0u;
    {
        const bool branch_taken_0x345ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345ff0) {
            ctx->pc = 0x346020u;
            return;
        }
    }
    ctx->pc = 0x345FF8u;
}
