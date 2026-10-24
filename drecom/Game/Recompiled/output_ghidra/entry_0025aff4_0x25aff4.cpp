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

// Function: entry_0025aff4
// Address: 0x25aff4 - 0x25b0d0
void entry_0025aff4_0x25aff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025aff4_0x25aff4");
#endif

    switch (ctx->pc) {
        case 0x25b05cu: goto label_25b05c;
        case 0x25b090u: goto label_25b090;
        case 0x25b0a8u: goto label_25b0a8;
        default: break;
    }

    ctx->pc = 0x25aff4u;

    // 0x25aff4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x25aff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x25aff8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25aff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25affc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25affcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b000: 0xe460018c  swc1        $f0, 0x18C($v1)
    ctx->pc = 0x25b000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 396), bits); }
    // 0x25b004: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25b004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b008: 0x906309e6  lbu         $v1, 0x9E6($v1)
    ctx->pc = 0x25b008u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2534)));
    // 0x25b00c: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x25B00Cu;
    {
        const bool branch_taken_0x25b00c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b00c) {
            ctx->pc = 0x25B0F8u;
            return;
        }
    }
    ctx->pc = 0x25B014u;
    // 0x25b014: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25b014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b018: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x25b018u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x25b01c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25b01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25b020: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x25b020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x25b024: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x25B024u;
    {
        const bool branch_taken_0x25b024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b024) {
            ctx->pc = 0x25B0F8u;
            return;
        }
    }
    ctx->pc = 0x25B02Cu;
    // 0x25b02c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b030: 0x904209e6  lbu         $v0, 0x9E6($v0)
    ctx->pc = 0x25b030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2534)));
    // 0x25b034: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25b034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25b038: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x25b038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x25b03c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b040: 0x904209e5  lbu         $v0, 0x9E5($v0)
    ctx->pc = 0x25b040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2533)));
    // 0x25b044: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25b044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25b048: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x25b048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x25b04c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x25b04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25b050: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x25b050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25b054: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x25B054u;
    SET_GPR_U32(ctx, 31, 0x25B05Cu);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x25B05Cu;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25B05Cu) { return; }
    ctx->pc = 0x25B05Cu;
label_25b05c:
    // 0x25b05c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x25b05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b060: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x25b060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b064: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x25b064u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x25b068: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x25b068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x25b06c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25b06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b070: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25b070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25b074: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25b074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b078: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x25b078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b07c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x25b07cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25b080: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x25b080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25b084: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x25b084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x25b088: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x25B088u;
    SET_GPR_U32(ctx, 31, 0x25B090u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x25B090u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25B090u) { return; }
    ctx->pc = 0x25B090u;
label_25b090:
    // 0x25b090: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25b090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b094: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x25b094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25b098: 0x24450190  addiu       $a1, $v0, 0x190
    ctx->pc = 0x25b098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x25b09c: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x25b09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b0a0: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x25B0A0u;
    SET_GPR_U32(ctx, 31, 0x25B0A8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x25B0A8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25B0A8u) { return; }
    ctx->pc = 0x25B0A8u;
label_25b0a8:
    // 0x25b0a8: 0x93a300a8  lbu         $v1, 0xA8($sp)
    ctx->pc = 0x25b0a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25b0ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25b0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25b0b0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25b0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25b0b4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25B0B4u;
    {
        const bool branch_taken_0x25b0b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b0b4) {
            ctx->pc = 0x25B0D0u;
            return;
        }
    }
    ctx->pc = 0x25B0BCu;
    // 0x25b0bc: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x25b0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b0c0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x25b0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b0c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25b0c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25b0c8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25b0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25b0cc: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x25b0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    ctx->pc = 0x25b0d0u;
}
