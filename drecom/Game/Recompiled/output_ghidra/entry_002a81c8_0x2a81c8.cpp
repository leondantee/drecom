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

// Function: entry_002a81c8
// Address: 0x2a81c8 - 0x2a8424
void entry_002a81c8_0x2a81c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a81c8_0x2a81c8");
#endif

    switch (ctx->pc) {
        case 0x2a8218u: goto label_2a8218;
        case 0x2a8234u: goto label_2a8234;
        case 0x2a8240u: goto label_2a8240;
        case 0x2a824cu: goto label_2a824c;
        case 0x2a8304u: goto label_2a8304;
        case 0x2a833cu: goto label_2a833c;
        case 0x2a8374u: goto label_2a8374;
        case 0x2a83acu: goto label_2a83ac;
        case 0x2a83e4u: goto label_2a83e4;
        case 0x2a841cu: goto label_2a841c;
        default: break;
    }

    ctx->pc = 0x2a81c8u;

    // 0x2a81c8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a81c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a81cc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a81ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a81d0: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2a81d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a81d4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a81d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a81d8: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2a81d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a81dc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a81dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a81e0: 0x0  nop
    ctx->pc = 0x2a81e0u;
    // NOP
    // 0x2a81e4: 0x450000fc  bc1f        . + 4 + (0xFC << 2)
    ctx->pc = 0x2A81E4u;
    {
        const bool branch_taken_0x2a81e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a81e4) {
            ctx->pc = 0x2A85D8u;
            return;
        }
    }
    ctx->pc = 0x2A81ECu;
    // 0x2a81ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a81ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a81f0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a81f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a81f4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a81f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a81f8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a81f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a81fc: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a81fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8200: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a8200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a8204: 0x24060214  addiu       $a2, $zero, 0x214
    ctx->pc = 0x2a8204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
    // 0x2a8208: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a8208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a820c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a820cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a8210: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A8210u;
    SET_GPR_U32(ctx, 31, 0x2A8218u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A8210u, 0x2A8218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8218u;
label_2a8218:
    // 0x2a8218: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a8218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a821c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2a821cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2a8220: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x2A8220u;
    {
        const bool branch_taken_0x2a8220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8220) {
            ctx->pc = 0x2A8424u;
            return;
        }
    }
    ctx->pc = 0x2A8228u;
    // 0x2a8228: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2a8228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a822c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A822Cu;
    SET_GPR_U32(ctx, 31, 0x2A8234u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A822Cu, 0x2A8234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8234u;
label_2a8234:
    // 0x2a8234: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a8234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a8238: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A8238u;
    SET_GPR_U32(ctx, 31, 0x2A8240u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A8238u, 0x2A8240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8240u;
label_2a8240:
    // 0x2a8240: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a8240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a8244: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A8244u;
    SET_GPR_U32(ctx, 31, 0x2A824Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A8244u, 0x2A824Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A824Cu;
label_2a824c:
    // 0x2a824c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2a824cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2a8250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8254: 0x0  nop
    ctx->pc = 0x2a8254u;
    // NOP
    // 0x2a8258: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2a8258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2a825c: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2a825cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2a8260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8264: 0x0  nop
    ctx->pc = 0x2a8264u;
    // NOP
    // 0x2a8268: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2a8268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2a826c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2a826cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2a8270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8274: 0x0  nop
    ctx->pc = 0x2a8274u;
    // NOP
    // 0x2a8278: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2a8278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2a827c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a827cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a8280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8284: 0x0  nop
    ctx->pc = 0x2a8284u;
    // NOP
    // 0x2a8288: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2a8288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2a828c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a828cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8294: 0x0  nop
    ctx->pc = 0x2a8294u;
    // NOP
    // 0x2a8298: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2a8298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2a829c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a829cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a82a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a82a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a82a4: 0x0  nop
    ctx->pc = 0x2a82a4u;
    // NOP
    // 0x2a82a8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2a82a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2a82ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a82acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a82b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a82b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a82b4: 0x0  nop
    ctx->pc = 0x2a82b4u;
    // NOP
    // 0x2a82b8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2a82b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2a82bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a82bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a82c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a82c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a82c4: 0x0  nop
    ctx->pc = 0x2a82c4u;
    // NOP
    // 0x2a82c8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a82c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2a82cc: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2a82ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2a82d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a82d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a82d4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a82d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a82d8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a82d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a82dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a82dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a82e0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a82e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a82e4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a82e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a82e8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a82e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a82ec: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a82ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a82f0: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a82f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a82f4: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a82f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a82f8: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a82f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a82fc: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A82FCu;
    SET_GPR_U32(ctx, 31, 0x2A8304u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A82FCu, 0x2A8304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8304u;
label_2a8304:
    // 0x2a8304: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2a8304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2a8308: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a8308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a830c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a830cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a8310: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a8310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a8314: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a8314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a8318: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a8318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a831c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a831cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a8320: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a8320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a8324: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a8324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a8328: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a8328u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a832c: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a832cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a8330: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a8330u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a8334: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A8334u;
    SET_GPR_U32(ctx, 31, 0x2A833Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A8334u, 0x2A833Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A833Cu;
label_2a833c:
    // 0x2a833c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a833cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a8340: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a8340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a8344: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a8344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a8348: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2a8348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2a834c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a834cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a8350: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a8350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8354: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a8354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a8358: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a8358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a835c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a835cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a8360: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a8360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a8364: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a8364u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a8368: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a8368u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a836c: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A836Cu;
    SET_GPR_U32(ctx, 31, 0x2A8374u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A836Cu, 0x2A8374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8374u;
label_2a8374:
    // 0x2a8374: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a8374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a8378: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a8378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a837c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a837cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a8380: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2a8380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2a8384: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a8384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a8388: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a8388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a838c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2a838cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2a8390: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a8390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a8394: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a8394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a8398: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a8398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a839c: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a839cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a83a0: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a83a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a83a4: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A83A4u;
    SET_GPR_U32(ctx, 31, 0x2A83ACu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A83A4u, 0x2A83ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A83ACu;
label_2a83ac:
    // 0x2a83ac: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2a83acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2a83b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a83b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a83b4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a83b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a83b8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a83b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a83bc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a83bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a83c0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a83c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a83c4: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2a83c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2a83c8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a83c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a83cc: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a83ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a83d0: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a83d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a83d4: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a83d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a83d8: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a83d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a83dc: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A83DCu;
    SET_GPR_U32(ctx, 31, 0x2A83E4u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A83DCu, 0x2A83E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A83E4u;
label_2a83e4:
    // 0x2a83e4: 0x3c103c23  lui         $s0, 0x3C23
    ctx->pc = 0x2a83e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)15395 << 16));
    // 0x2a83e8: 0x3603d70a  ori         $v1, $s0, 0xD70A
    ctx->pc = 0x2a83e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)55050);
    // 0x2a83ec: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a83ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a83f0: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x2a83f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x2a83f4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a83f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a83f8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a83f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a83fc: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a83fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a8400: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a8400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a8404: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a8404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a8408: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a8408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a840c: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a840cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a8410: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a8410u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a8414: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A8414u;
    SET_GPR_U32(ctx, 31, 0x2A841Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A8414u, 0x2A841Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A841Cu;
label_2a841c:
    // 0x2a841c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2A841Cu;
    {
        const bool branch_taken_0x2a841c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a841c) {
            ctx->pc = 0x2A85D8u;
            return;
        }
    }
    ctx->pc = 0x2A8424u;
}
