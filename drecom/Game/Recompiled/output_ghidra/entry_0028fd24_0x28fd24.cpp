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

// Function: entry_0028fd24
// Address: 0x28fd24 - 0x28fe54
void entry_0028fd24_0x28fd24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028fd24_0x28fd24");
#endif

    switch (ctx->pc) {
        case 0x28fd38u: goto label_28fd38;
        case 0x28fdb8u: goto label_28fdb8;
        case 0x28fdf0u: goto label_28fdf0;
        case 0x28fe24u: goto label_28fe24;
        case 0x28fe3cu: goto label_28fe3c;
        case 0x28fe48u: goto label_28fe48;
        default: break;
    }

    ctx->pc = 0x28fd24u;

    // 0x28fd24: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x28fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x28fd28: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28fd28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28fd2c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x28fd2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x28fd30: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28FD30u;
    SET_GPR_U32(ctx, 31, 0x28FD38u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28FD30u, 0x28FD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD38u;
label_28fd38:
    // 0x28fd38: 0x2631002c  addiu       $s1, $s1, 0x2C
    ctx->pc = 0x28fd38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x28fd3c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28fd40: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x28fd40u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x28fd44: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x28fd48: 0x34431009  ori         $v1, $v0, 0x1009
    ctx->pc = 0x28fd48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x28fd4c: 0xaec30004  sw          $v1, 0x4($s6)
    ctx->pc = 0x28fd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
    // 0x28fd50: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x28fd50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28fd54: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x28fd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x28fd58: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28fd58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x28fd5c: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x28fd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x28fd60: 0x3446000a  ori         $a2, $v0, 0xA
    ctx->pc = 0x28fd60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x28fd64: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x28fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x28fd68: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28fd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28fd6c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28fd6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x28fd70: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x28fd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x28fd74: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x28fd74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x28fd78: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x28fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x28fd7c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x28fd7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28fd80: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x28fd80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x28fd84: 0x31638  dsll        $v0, $v1, 24
    ctx->pc = 0x28fd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 24);
    // 0x28fd88: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x28fd88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x28fd8c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x28fd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x28fd90: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x28fd90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28fd94: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x28fd94u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x28fd98: 0x610bc  dsll32      $v0, $a2, 2
    ctx->pc = 0x28fd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 2));
    // 0x28fd9c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x28fd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28fda0: 0xfec30008  sd          $v1, 0x8($s6)
    ctx->pc = 0x28fda0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 3));
    // 0x28fda4: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x28fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x28fda8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28fda8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28fdac: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x28fdacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x28fdb0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28FDB0u;
    SET_GPR_U32(ctx, 31, 0x28FDB8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28FDB0u, 0x28FDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FDB8u;
label_28fdb8:
    // 0x28fdb8: 0x26c30010  addiu       $v1, $s6, 0x10
    ctx->pc = 0x28fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x28fdbc: 0x7060b628  paddub      $s6, $v1, $zero
    ctx->pc = 0x28fdbcu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28fdc0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28fdc4: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x28fdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x28fdc8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x28fdcc: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x28fdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x28fdd0: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x28fdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x28fdd4: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x28fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x28fdd8: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x28fdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
    // 0x28fddc: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x28fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x28fde0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28fde0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28fde4: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x28fde4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x28fde8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28FDE8u;
    SET_GPR_U32(ctx, 31, 0x28FDF0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28FDE8u, 0x28FDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FDF0u;
label_28fdf0:
    // 0x28fdf0: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x28fdf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x28fdf4: 0x70c0a628  paddub      $s4, $a2, $zero
    ctx->pc = 0x28fdf4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28fdf8: 0x8e035dc8  lw          $v1, 0x5DC8($s0)
    ctx->pc = 0x28fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
    // 0x28fdfc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28fe00: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x28FE00u;
    {
        const bool branch_taken_0x28fe00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28fe00) {
            ctx->pc = 0x28FE54u;
            return;
        }
    }
    ctx->pc = 0x28FE08u;
    // 0x28fe08: 0x8e025dcc  lw          $v0, 0x5DCC($s0)
    ctx->pc = 0x28fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24012)));
    // 0x28fe0c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x28fe0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28fe10: 0x14470010  bne         $v0, $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x28FE10u;
    {
        const bool branch_taken_0x28fe10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x28fe10) {
            ctx->pc = 0x28FE54u;
            return;
        }
    }
    ctx->pc = 0x28FE18u;
    // 0x28fe18: 0xc60c5e00  lwc1        $f12, 0x5E00($s0)
    ctx->pc = 0x28fe18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28fe1c: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x28FE1Cu;
    SET_GPR_U32(ctx, 31, 0x28FE24u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x28FE1Cu, 0x28FE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE24u;
label_28fe24:
    // 0x28fe24: 0x3c064060  lui         $a2, 0x4060
    ctx->pc = 0x28fe24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16480 << 16));
    // 0x28fe28: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x28fe28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x28fe2c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28fe2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28fe30: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28fe30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28fe34: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x28FE34u;
    SET_GPR_U32(ctx, 31, 0x28FE3Cu);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x28FE34u, 0x28FE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE3Cu;
label_28fe3c:
    // 0x28fe3c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28fe3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28fe40: 0xc047ca2  jal         func_11F288
    ctx->pc = 0x28FE40u;
    SET_GPR_U32(ctx, 31, 0x28FE48u);
    ctx->pc = 0x11F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F288u, 0x28FE40u, 0x28FE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE48u;
label_28fe48:
    // 0x28fe48: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28fe48u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28fe4c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x28FE4Cu;
    {
        const bool branch_taken_0x28fe4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fe4c) {
            ctx->pc = 0x28FE90u;
            return;
        }
    }
    ctx->pc = 0x28FE54u;
}
