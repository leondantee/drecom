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

// Function: caseD_5
// Address: 0x207218 - 0x207350
void caseD_5_0x207218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x207218");
#endif

    switch (ctx->pc) {
        case 0x20723cu: goto label_20723c;
        case 0x207284u: goto label_207284;
        case 0x2072a8u: goto label_2072a8;
        case 0x207314u: goto label_207314;
        default: break;
    }

    ctx->pc = 0x207218u;

    // 0x207218: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x207218u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20721c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x20721cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207220: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x207220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x207224: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x207224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x207228: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x207228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x20722c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x20722cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x207230: 0xc46d011c  lwc1        $f13, 0x11C($v1)
    ctx->pc = 0x207230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x207234: 0xc058f50  jal         func_163D40
    ctx->pc = 0x207234u;
    SET_GPR_U32(ctx, 31, 0x20723Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x207234u, 0x20723Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20723Cu;
label_20723c:
    // 0x20723c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x20723cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207240: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x207240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x207244: 0xe440011c  swc1        $f0, 0x11C($v0)
    ctx->pc = 0x207244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
    // 0x207248: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20724c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x20724cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207250: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x207250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x207254: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x207254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x207258: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x20725c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x20725cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207260: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207264: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x207264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x207268: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x207268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x20726c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x20726cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x207270: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x207270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x207274: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x207274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x207278: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x207278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x20727c: 0xc05c848  jal         func_172120
    ctx->pc = 0x20727Cu;
    SET_GPR_U32(ctx, 31, 0x207284u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x20727Cu, 0x207284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207284u;
label_207284:
    // 0x207284: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x207284u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x207288: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x20728c: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x20728cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x207290: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x207290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x207294: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x207294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x207298: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x207298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20729c: 0xc46d0124  lwc1        $f13, 0x124($v1)
    ctx->pc = 0x20729cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2072a0: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2072A0u;
    SET_GPR_U32(ctx, 31, 0x2072A8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2072A0u, 0x2072A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2072A8u;
label_2072a8:
    // 0x2072a8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2072a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2072ac: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2072acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2072b0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2072b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2072b4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2072b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2072b8: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x2072b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2072bc: 0x94620140  lhu         $v0, 0x140($v1)
    ctx->pc = 0x2072bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x2072c0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2072c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2072c4: 0xa4620140  sh          $v0, 0x140($v1)
    ctx->pc = 0x2072c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2072c8: 0x3c023cc4  lui         $v0, 0x3CC4
    ctx->pc = 0x2072c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15556 << 16));
    // 0x2072cc: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x2072ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x2072d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2072d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2072d4: 0x0  nop
    ctx->pc = 0x2072d4u;
    // NOP
    // 0x2072d8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2072d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2072dc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2072dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2072e0: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x2072e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2072e4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2072e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2072e8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2072e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2072ec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2072ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2072f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2072f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2072f4: 0x0  nop
    ctx->pc = 0x2072f4u;
    // NOP
    // 0x2072f8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2072f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2072fc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2072fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207300: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207304: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x207304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x207308: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x207308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x20730c: 0xc067594  jal         func_19D650
    ctx->pc = 0x20730Cu;
    SET_GPR_U32(ctx, 31, 0x207314u);
    ctx->pc = 0x19D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D650u, 0x20730Cu, 0x207314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207314u;
label_207314:
    // 0x207314: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x207314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x207318: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x207318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20731c: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x20731cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x207320: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x207320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x207324: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207328: 0x0  nop
    ctx->pc = 0x207328u;
    // NOP
    // 0x20732c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20732cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x207330: 0x0  nop
    ctx->pc = 0x207330u;
    // NOP
    // 0x207334: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x207334u;
    {
        const bool branch_taken_0x207334 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207334) {
            ctx->pc = 0x207350u;
            return;
        }
    }
    ctx->pc = 0x20733Cu;
    // 0x20733c: 0x3c023d13  lui         $v0, 0x3D13
    ctx->pc = 0x20733cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15635 << 16));
    // 0x207340: 0x344274bc  ori         $v0, $v0, 0x74BC
    ctx->pc = 0x207340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29884);
    // 0x207344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207348: 0x0  nop
    ctx->pc = 0x207348u;
    // NOP
    // 0x20734c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x20734cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->pc = 0x207350u;
}
