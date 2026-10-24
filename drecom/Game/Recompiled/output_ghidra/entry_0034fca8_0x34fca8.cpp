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

// Function: entry_0034fca8
// Address: 0x34fca8 - 0x34fe5c
void entry_0034fca8_0x34fca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034fca8_0x34fca8");
#endif

    switch (ctx->pc) {
        case 0x34fcd4u: goto label_34fcd4;
        case 0x34fcf0u: goto label_34fcf0;
        case 0x34fd08u: goto label_34fd08;
        case 0x34fd14u: goto label_34fd14;
        case 0x34fd24u: goto label_34fd24;
        case 0x34fd30u: goto label_34fd30;
        case 0x34fd8cu: goto label_34fd8c;
        case 0x34fe08u: goto label_34fe08;
        default: break;
    }

    ctx->pc = 0x34fca8u;

    // 0x34fca8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34fca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fcac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fcacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fcb0: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x34fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x34fcb4: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x34fcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x34fcb8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34fcb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34fcbc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x34fcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x34fcc0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x34fcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34fcc4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x34fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34fcc8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x34fcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x34fccc: 0xc05c848  jal         func_172120
    ctx->pc = 0x34FCCCu;
    SET_GPR_U32(ctx, 31, 0x34FCD4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x34FCCCu, 0x34FCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FCD4u;
label_34fcd4:
    // 0x34fcd4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x34fcd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x34fcd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34fcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fcdc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x34fcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34fce0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x34fce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34fce4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x34fce4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34fce8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34FCE8u;
    SET_GPR_U32(ctx, 31, 0x34FCF0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34FCE8u, 0x34FCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FCF0u;
label_34fcf0:
    // 0x34fcf0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fcf4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x34fcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x34fcf8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34fcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fcfc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34fcfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34fd00: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34FD00u;
    SET_GPR_U32(ctx, 31, 0x34FD08u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34FD00u, 0x34FD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FD08u;
label_34fd08:
    // 0x34fd08: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34fd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fd0c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34FD0Cu;
    SET_GPR_U32(ctx, 31, 0x34FD14u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34FD0Cu, 0x34FD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FD14u;
label_34fd14:
    // 0x34fd14: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34fd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fd18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34fd18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34fd1c: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34FD1Cu;
    SET_GPR_U32(ctx, 31, 0x34FD24u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34FD1Cu, 0x34FD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FD24u;
label_34fd24:
    // 0x34fd24: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34fd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fd28: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34FD28u;
    SET_GPR_U32(ctx, 31, 0x34FD30u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34FD28u, 0x34FD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FD30u;
label_34fd30:
    // 0x34fd30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fd34: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34fd34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34fd38: 0x10600087  beqz        $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x34FD38u;
    {
        const bool branch_taken_0x34fd38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fd38) {
            ctx->pc = 0x34FF58u;
            return;
        }
    }
    ctx->pc = 0x34FD40u;
    // 0x34fd40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fd44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fd48: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x34fd48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x34fd4c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34fd50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fd54: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x34fd54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x34fd58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fd5c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x34fd5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34fd60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fd64: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x34fd64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34fd68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fd6c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x34fd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x34fd70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34fd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fd74: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34fd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34fd78: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x34fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34fd7c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x34fd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x34fd80: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34fd80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34fd84: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34FD84u;
    SET_GPR_U32(ctx, 31, 0x34FD8Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34FD84u, 0x34FD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FD8Cu;
label_34fd8c:
    // 0x34fd8c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34fd8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34fd90: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x34fd90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x34fd94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fd98: 0x14830030  bne         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x34FD98u;
    {
        const bool branch_taken_0x34fd98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34fd98) {
            ctx->pc = 0x34FE5Cu;
            return;
        }
    }
    ctx->pc = 0x34FDA0u;
    // 0x34fda0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34fda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fda4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fda8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34fda8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34fdac: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x34fdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34fdb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fdb4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34fdb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34fdb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fdbc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34fdbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34fdc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fdc4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34fdc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34fdc8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fdcc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34fdccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x34fdd0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fdd4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34fdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34fdd8: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34fdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34fddc: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x34fddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x34fde0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34fde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34fde4: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34fde4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x34fde8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fdec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34fdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34fdf0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x34fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34fdf4: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x34fdf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x34fdf8: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x34FDF8u;
    {
        const bool branch_taken_0x34fdf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34fdf8) {
            ctx->pc = 0x34FE5Cu;
            return;
        }
    }
    ctx->pc = 0x34FE00u;
    // 0x34fe00: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34FE00u;
    SET_GPR_U32(ctx, 31, 0x34FE08u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34FE00u, 0x34FE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FE08u;
label_34fe08:
    // 0x34fe08: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34fe08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34fe0c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x34fe0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x34fe10: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x34FE10u;
    {
        const bool branch_taken_0x34fe10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fe10) {
            ctx->pc = 0x34FE5Cu;
            return;
        }
    }
    ctx->pc = 0x34FE18u;
    // 0x34fe18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34fe18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fe1c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fe20: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34fe20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34fe24: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x34fe24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x34fe28: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fe28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fe2c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34fe2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34fe30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fe30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fe34: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34fe34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34fe38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fe38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fe3c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34fe3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34fe40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fe44: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34fe44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x34fe48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fe4c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34fe4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34fe50: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34fe54: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x34fe54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x34fe58: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x34fe58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x34fe5cu;
}
