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

// Function: Set_sz
// Address: 0x171f80 - 0x17211c
void Set_sz_0x171f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_sz_0x171f80");
#endif

    switch (ctx->pc) {
        case 0x171fd4u: goto label_171fd4;
        case 0x171fe0u: goto label_171fe0;
        case 0x17200cu: goto label_17200c;
        case 0x17202cu: goto label_17202c;
        case 0x172108u: goto label_172108;
        default: break;
    }

    ctx->pc = 0x171f80u;

    // 0x171f80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x171f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x171f84: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x171f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x171f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x171f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x171f8c: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x171f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x171f90: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x171f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x171f94: 0x244257e0  addiu       $v0, $v0, 0x57E0
    ctx->pc = 0x171f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22496));
    // 0x171f98: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x171f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x171f9c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x171f9cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3857E0u));
    // 0x171fa0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x171fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x171fa4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x171fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x171fa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171fac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x171facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x171fb0: 0xe440012c  swc1        $f0, 0x12C($v0)
    ctx->pc = 0x171fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    // 0x171fb4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x171fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x171fb8: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x171fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x171fbc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x171fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x171fc0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x171fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x171fc4: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x171fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x171fc8: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x171fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x171fcc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x171FCCu;
    SET_GPR_U32(ctx, 31, 0x171FD4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x171FD4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x171FD4u) { return; }
    ctx->pc = 0x171FD4u;
label_171fd4:
    // 0x171fd4: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x171fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x171fd8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x171FD8u;
    SET_GPR_U32(ctx, 31, 0x171FE0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x171FD8u, 0x171FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171FE0u;
label_171fe0:
    // 0x171fe0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x171fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x171fe4: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x171fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x171fe8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x171fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x171fec: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x171fecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x171ff0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x171ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x171ff4: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x171ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x171ff8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x171ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x171ffc: 0x24650190  addiu       $a1, $v1, 0x190
    ctx->pc = 0x171ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x172000: 0x244601a0  addiu       $a2, $v0, 0x1A0
    ctx->pc = 0x172000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x172004: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x172004u;
    SET_GPR_U32(ctx, 31, 0x17200Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x172004u, 0x17200Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17200Cu;
label_17200c:
    // 0x17200c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17200cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x172010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172014: 0x0  nop
    ctx->pc = 0x172014u;
    // NOP
    // 0x172018: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x172018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x17201c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17201cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x172020: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x172020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x172024: 0xc040c24  jal         func_103090
    ctx->pc = 0x172024u;
    SET_GPR_U32(ctx, 31, 0x17202Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x17202Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17202Cu) { return; }
    ctx->pc = 0x17202Cu;
label_17202c:
    // 0x17202c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17202cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x172030: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x172030u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x172034: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x172034u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x172038: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x172038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17203c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17203cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x172040: 0x8c700064  lw          $s0, 0x64($v1)
    ctx->pc = 0x172040u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x172044: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x172044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x172048: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x172048u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x17204c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x17204cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x172050: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x172050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x172054: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x172054u;
    {
        const bool branch_taken_0x172054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x172054) {
            ctx->pc = 0x172108u;
            goto label_172108;
        }
    }
    ctx->pc = 0x17205Cu;
    // 0x17205c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17205cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172060: 0x0  nop
    ctx->pc = 0x172060u;
    // NOP
    // 0x172064: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x172064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x172068: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x172068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17206c: 0x8c220144  lw          $v0, 0x144($at)
    ctx->pc = 0x17206cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0144u));
    // 0x172070: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x172070u;
    {
        const bool branch_taken_0x172070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172070) {
            ctx->pc = 0x172090u;
            goto label_172090;
        }
    }
    ctx->pc = 0x172078u;
    // 0x172078: 0x3c023b00  lui         $v0, 0x3B00
    ctx->pc = 0x172078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15104 << 16));
    // 0x17207c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17207cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172080: 0x0  nop
    ctx->pc = 0x172080u;
    // NOP
    // 0x172084: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x172084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x172088: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x172088u;
    {
        const bool branch_taken_0x172088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172088) {
            ctx->pc = 0x17209Cu;
            goto label_17209c;
        }
    }
    ctx->pc = 0x172090u;
label_172090:
    // 0x172090: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172094: 0x0  nop
    ctx->pc = 0x172094u;
    // NOP
    // 0x172098: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x172098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_17209c:
    // 0x17209c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x17209cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1720a0: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1720a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1720a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1720a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1720a8: 0x0  nop
    ctx->pc = 0x1720a8u;
    // NOP
    // 0x1720ac: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x1720acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x1720b0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1720b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1720b4: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1720b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1720b8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1720b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1720bc: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x1720bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x1720c0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1720c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1720c4: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x1720c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x1720c8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1720c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1720cc: 0x2442c940  addiu       $v0, $v0, -0x36C0
    ctx->pc = 0x1720ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953280));
    // 0x1720d0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1720d0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x47C940u));
    // 0x1720d4: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1720d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1720d8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1720d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1720dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1720dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1720e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1720e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1720e4: 0x0  nop
    ctx->pc = 0x1720e4u;
    // NOP
    // 0x1720e8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1720e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1720ec: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1720ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1720f0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1720f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1720f4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1720f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1720f8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1720f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1720fc: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x1720fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x172100: 0xc040ddc  jal         func_103770
    ctx->pc = 0x172100u;
    SET_GPR_U32(ctx, 31, 0x172108u);
    ctx->pc = 0x103770u;
    {
        ctx->pc = 0x172108u;
        ps2_stubs::sceVu0LightColorMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x172108u) { return; }
    ctx->pc = 0x172108u;
label_172108:
    // 0x172108: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x172108u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17210c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17210cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172110: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x172110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x172114: 0x3e00008  jr          $ra
    ctx->pc = 0x172114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17211Cu;
}
