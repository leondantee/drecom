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

// Function: entry_0026de7c
// Address: 0x26de7c - 0x26df70
void entry_0026de7c_0x26de7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026de7c_0x26de7c");
#endif

    switch (ctx->pc) {
        case 0x26de90u: goto label_26de90;
        case 0x26dea8u: goto label_26dea8;
        case 0x26dec0u: goto label_26dec0;
        case 0x26ded4u: goto label_26ded4;
        case 0x26dee4u: goto label_26dee4;
        case 0x26df34u: goto label_26df34;
        case 0x26df54u: goto label_26df54;
        default: break;
    }

    ctx->pc = 0x26de7cu;

    // 0x26de7c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x26de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x26de80: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26de80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26de84: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x26de84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26de88: 0xc067844  jal         func_19E110
    ctx->pc = 0x26DE88u;
    SET_GPR_U32(ctx, 31, 0x26DE90u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x26DE88u, 0x26DE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DE90u;
label_26de90:
    // 0x26de90: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x26de90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x26de94: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x26de94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x26de98: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x26de98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x26de9c: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x26de9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x26dea0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x26DEA0u;
    SET_GPR_U32(ctx, 31, 0x26DEA8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x26DEA8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26DEA8u) { return; }
    ctx->pc = 0x26DEA8u;
label_26dea8:
    // 0x26dea8: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x26dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x26deac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26deacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26deb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26deb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26deb4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x26deb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26deb8: 0xc0677a8  jal         func_19DEA0
    ctx->pc = 0x26DEB8u;
    SET_GPR_U32(ctx, 31, 0x26DEC0u);
    ctx->pc = 0x19DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DEA0u, 0x26DEB8u, 0x26DEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DEC0u;
label_26dec0:
    // 0x26dec0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26dec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26dec4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x26dec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26dec8: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x26dec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26decc: 0xc040c00  jal         func_103000
    ctx->pc = 0x26DECCu;
    SET_GPR_U32(ctx, 31, 0x26DED4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x26DED4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26DED4u) { return; }
    ctx->pc = 0x26DED4u;
label_26ded4:
    // 0x26ded4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x26ded4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26ded8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x26ded8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26dedc: 0xc040c44  jal         func_103110
    ctx->pc = 0x26DEDCu;
    SET_GPR_U32(ctx, 31, 0x26DEE4u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x26DEE4u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26DEE4u) { return; }
    ctx->pc = 0x26DEE4u;
label_26dee4:
    // 0x26dee4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26dee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dee8: 0x0  nop
    ctx->pc = 0x26dee8u;
    // NOP
    // 0x26deec: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x26deecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x26def0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26def0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26def4: 0x0  nop
    ctx->pc = 0x26def4u;
    // NOP
    // 0x26def8: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x26def8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x26defc: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x26defcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x26df00: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x26df00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x26df04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26df04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26df08: 0x0  nop
    ctx->pc = 0x26df08u;
    // NOP
    // 0x26df0c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x26df0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x26df10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26df10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26df14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26df14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26df18: 0x0  nop
    ctx->pc = 0x26df18u;
    // NOP
    // 0x26df1c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x26df1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x26df20: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x26df20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26df24: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x26df24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26df28: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x26df28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26df2c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x26DF2Cu;
    SET_GPR_U32(ctx, 31, 0x26DF34u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x26DF34u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26DF34u) { return; }
    ctx->pc = 0x26DF34u;
label_26df34:
    // 0x26df34: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x26df34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x26df38: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x26df38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x26df3c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x26df3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26df40: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x26df40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x26df44: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x26df44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26df48: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x26df48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x26df4c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x26DF4Cu;
    SET_GPR_U32(ctx, 31, 0x26DF54u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x26DF4Cu, 0x26DF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DF54u;
label_26df54:
    // 0x26df54: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x26df54u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26df58: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x26DF58u;
    {
        const bool branch_taken_0x26df58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x26df58) {
            ctx->pc = 0x26DF70u;
            return;
        }
    }
    ctx->pc = 0x26DF60u;
    // 0x26df60: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x26df60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26df64: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x26df64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26df68: 0xc040c9e  jal         func_103278
    ctx->pc = 0x26DF68u;
    SET_GPR_U32(ctx, 31, 0x26DF70u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x26DF70u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26DF70u) { return; }
    ctx->pc = 0x26DF70u;
}
