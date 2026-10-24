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

// Function: entry_001acf68
// Address: 0x1acf68 - 0x1ad090
void entry_001acf68_0x1acf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acf68_0x1acf68");
#endif

    switch (ctx->pc) {
        case 0x1acf80u: goto label_1acf80;
        case 0x1acf8cu: goto label_1acf8c;
        case 0x1acfc0u: goto label_1acfc0;
        case 0x1acff0u: goto label_1acff0;
        case 0x1ad008u: goto label_1ad008;
        case 0x1ad05cu: goto label_1ad05c;
        default: break;
    }

    ctx->pc = 0x1acf68u;

    // 0x1acf68: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1acf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1acf6c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1acf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1acf70: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1acf70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1acf74: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x1acf74u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1acf78: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1ACF78u;
    SET_GPR_U32(ctx, 31, 0x1ACF80u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1ACF80u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1ACF80u) { return; }
    ctx->pc = 0x1ACF80u;
label_1acf80:
    // 0x1acf80: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x1acf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1acf84: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1ACF84u;
    SET_GPR_U32(ctx, 31, 0x1ACF8Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1ACF84u, 0x1ACF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACF8Cu;
label_1acf8c:
    // 0x1acf8c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1acf8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1acf90: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1acf90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1acf94: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x1acf94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x1acf98: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1acf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1acf9c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1acf9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1acfa0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1acfa0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1acfa4: 0xa423a4d0  sh          $v1, -0x5B30($at)
    ctx->pc = 0x1acfa4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294943952), (uint16_t)GPR_U32(ctx, 3));
    // 0x1acfa8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1acfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1acfac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1acfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1acfb0: 0x2445e510  addiu       $a1, $v0, -0x1AF0
    ctx->pc = 0x1acfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x1acfb4: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x1acfb4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1acfb8: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1ACFB8u;
    SET_GPR_U32(ctx, 31, 0x1ACFC0u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1ACFB8u, 0x1ACFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACFC0u;
label_1acfc0:
    // 0x1acfc0: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1acfc0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1acfc4: 0x32c2003f  andi        $v0, $s6, 0x3F
    ctx->pc = 0x1acfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)63);
    // 0x1acfc8: 0x14400105  bnez        $v0, . + 4 + (0x105 << 2)
    ctx->pc = 0x1ACFC8u;
    {
        const bool branch_taken_0x1acfc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acfc8) {
            ctx->pc = 0x1AD3E0u;
            return;
        }
    }
    ctx->pc = 0x1ACFD0u;
    // 0x1acfd0: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1acfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1acfd4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1acfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1acfd8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1acfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1acfdc: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x1acfdcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1acfe0: 0x24460d08  addiu       $a2, $v0, 0xD08
    ctx->pc = 0x1acfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3336));
    // 0x1acfe4: 0x24c67ff8  addiu       $a2, $a2, 0x7FF8
    ctx->pc = 0x1acfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32760));
    // 0x1acfe8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x1ACFE8u;
    SET_GPR_U32(ctx, 31, 0x1ACFF0u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x1ACFF0u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1ACFF0u) { return; }
    ctx->pc = 0x1ACFF0u;
label_1acff0:
    // 0x1acff0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1acff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1acff4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1acff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1acff8: 0x2445e510  addiu       $a1, $v0, -0x1AF0
    ctx->pc = 0x1acff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x1acffc: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1acffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ad000: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1AD000u;
    SET_GPR_U32(ctx, 31, 0x1AD008u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1AD000u, 0x1AD008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD008u;
label_1ad008:
    // 0x1ad008: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1ad008u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ad00c: 0x32c2003f  andi        $v0, $s6, 0x3F
    ctx->pc = 0x1ad00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)63);
    // 0x1ad010: 0x144000f3  bnez        $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x1AD010u;
    {
        const bool branch_taken_0x1ad010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad010) {
            ctx->pc = 0x1AD3E0u;
            return;
        }
    }
    ctx->pc = 0x1AD018u;
    // 0x1ad018: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1ad018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1ad01c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ad01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ad020: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ad024: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ad024u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1ad028: 0x8c32b490  lw          $s2, -0x4B70($at)
    ctx->pc = 0x1ad028u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947984)));
    // 0x1ad02c: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1ad02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1ad030: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ad030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ad034: 0x244234b8  addiu       $v0, $v0, 0x34B8
    ctx->pc = 0x1ad034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13496));
    // 0x1ad038: 0x24427ff8  addiu       $v0, $v0, 0x7FF8
    ctx->pc = 0x1ad038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32760));
    // 0x1ad03c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1ad03cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad040: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x1ad040u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x1ad044: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1ad044u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1ad048: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ad048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ad04c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1ad04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ad050: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x1ad050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ad054: 0xc040c60  jal         func_103180
    ctx->pc = 0x1AD054u;
    SET_GPR_U32(ctx, 31, 0x1AD05Cu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x1AD05Cu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AD05Cu) { return; }
    ctx->pc = 0x1AD05Cu;
label_1ad05c:
    // 0x1ad05c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ad05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ad060: 0x12620045  beq         $s3, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1AD060u;
    {
        const bool branch_taken_0x1ad060 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad060) {
            ctx->pc = 0x1AD178u;
            return;
        }
    }
    ctx->pc = 0x1AD068u;
    // 0x1ad068: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ad068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad06c: 0x1262002c  beq         $s3, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1AD06Cu;
    {
        const bool branch_taken_0x1ad06c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad06c) {
            ctx->pc = 0x1AD120u;
            return;
        }
    }
    ctx->pc = 0x1AD074u;
    // 0x1ad074: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad078: 0x12620013  beq         $s3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AD078u;
    {
        const bool branch_taken_0x1ad078 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad078) {
            ctx->pc = 0x1AD0C8u;
            return;
        }
    }
    ctx->pc = 0x1AD080u;
    // 0x1ad080: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD080u;
    {
        const bool branch_taken_0x1ad080 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad080) {
            ctx->pc = 0x1AD090u;
            return;
        }
    }
    ctx->pc = 0x1AD088u;
    // 0x1ad088: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1AD088u;
    {
        const bool branch_taken_0x1ad088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad088) {
            ctx->pc = 0x1AD1C8u;
            return;
        }
    }
    ctx->pc = 0x1AD090u;
}
