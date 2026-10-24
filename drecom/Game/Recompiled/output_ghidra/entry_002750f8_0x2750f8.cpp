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

// Function: entry_002750f8
// Address: 0x2750f8 - 0x2751c0
void entry_002750f8_0x2750f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002750f8_0x2750f8");
#endif

    switch (ctx->pc) {
        case 0x275140u: goto label_275140;
        case 0x27515cu: goto label_27515c;
        case 0x275178u: goto label_275178;
        default: break;
    }

    ctx->pc = 0x2750f8u;

    // 0x2750f8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2750f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2750fc: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x2750fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x275100: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x275100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x275104: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x275104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x275108: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x275108u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27510c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x27510cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x275110: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x275110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x275114: 0x1264002a  beq         $s3, $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x275114u;
    {
        const bool branch_taken_0x275114 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 4));
        if (branch_taken_0x275114) {
            ctx->pc = 0x2751C0u;
            return;
        }
    }
    ctx->pc = 0x27511Cu;
    // 0x27511c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x27511cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x275120: 0xae620100  sw          $v0, 0x100($s3)
    ctx->pc = 0x275120u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 2));
    // 0x275124: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x275124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x275128: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x275128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x27512c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27512cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275130: 0x0  nop
    ctx->pc = 0x275130u;
    // NOP
    // 0x275134: 0xe66000ac  swc1        $f0, 0xAC($s3)
    ctx->pc = 0x275134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 172), bits); }
    // 0x275138: 0xc06765c  jal         func_19D970
    ctx->pc = 0x275138u;
    SET_GPR_U32(ctx, 31, 0x275140u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x275138u, 0x275140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275140u;
label_275140:
    // 0x275140: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x275140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x275144: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x275144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x275148: 0x0  nop
    ctx->pc = 0x275148u;
    // NOP
    // 0x27514c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x27514cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x275150: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x275150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x275154: 0xc06765c  jal         func_19D970
    ctx->pc = 0x275154u;
    SET_GPR_U32(ctx, 31, 0x27515Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x275154u, 0x27515Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27515Cu;
label_27515c:
    // 0x27515c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x27515cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x275160: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x275160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x275164: 0x0  nop
    ctx->pc = 0x275164u;
    // NOP
    // 0x275168: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x275168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27516c: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x27516cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x275170: 0xc06765c  jal         func_19D970
    ctx->pc = 0x275170u;
    SET_GPR_U32(ctx, 31, 0x275178u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x275170u, 0x275178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275178u;
label_275178:
    // 0x275178: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x275178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x27517c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x27517cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x275180: 0x0  nop
    ctx->pc = 0x275180u;
    // NOP
    // 0x275184: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x275184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x275188: 0xe6600058  swc1        $f0, 0x58($s3)
    ctx->pc = 0x275188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x27518c: 0xc6610050  lwc1        $f1, 0x50($s3)
    ctx->pc = 0x27518cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275190: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x275190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x275194: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x275194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275198: 0x0  nop
    ctx->pc = 0x275198u;
    // NOP
    // 0x27519c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27519cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2751a0: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x2751a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x2751a4: 0xc6610058  lwc1        $f1, 0x58($s3)
    ctx->pc = 0x2751a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2751a8: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x2751a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x2751ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2751acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2751b0: 0x0  nop
    ctx->pc = 0x2751b0u;
    // NOP
    // 0x2751b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2751b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2751b8: 0xe6600058  swc1        $f0, 0x58($s3)
    ctx->pc = 0x2751b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x2751bc: 0x0  nop
    ctx->pc = 0x2751bcu;
    // NOP
    ctx->pc = 0x2751c0u;
}
