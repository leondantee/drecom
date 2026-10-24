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

// Function: entry_002ec188
// Address: 0x2ec188 - 0x2ec378
void entry_002ec188_0x2ec188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ec188_0x2ec188");
#endif

    switch (ctx->pc) {
        case 0x2ec210u: goto label_2ec210;
        case 0x2ec240u: goto label_2ec240;
        case 0x2ec33cu: goto label_2ec33c;
        case 0x2ec35cu: goto label_2ec35c;
        default: break;
    }

    ctx->pc = 0x2ec188u;

    // 0x2ec188: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ec188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2ec18c: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x2ec18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2ec190: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x2ec190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x2ec194: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x2ec194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2ec198: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2ec198u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ec19c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ec19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ec1a0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ec1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ec1a4: 0x12030074  beq         $s0, $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x2EC1A4u;
    {
        const bool branch_taken_0x2ec1a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ec1a4) {
            ctx->pc = 0x2EC378u;
            return;
        }
    }
    ctx->pc = 0x2EC1ACu;
    // 0x2ec1ac: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ec1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ec1b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec1b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec1b4: 0x0  nop
    ctx->pc = 0x2ec1b4u;
    // NOP
    // 0x2ec1b8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ec1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ec1bc: 0x3c024133  lui         $v0, 0x4133
    ctx->pc = 0x2ec1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16691 << 16));
    // 0x2ec1c0: 0x34523333  ori         $s2, $v0, 0x3333
    ctx->pc = 0x2ec1c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ec1c4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2ec1c4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec1c8: 0x0  nop
    ctx->pc = 0x2ec1c8u;
    // NOP
    // 0x2ec1cc: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ec1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ec1d0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ec1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2ec1d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec1d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec1d8: 0x0  nop
    ctx->pc = 0x2ec1d8u;
    // NOP
    // 0x2ec1dc: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ec1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ec1e0: 0x3c124300  lui         $s2, 0x4300
    ctx->pc = 0x2ec1e0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)17152 << 16));
    // 0x2ec1e4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2ec1e4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec1e8: 0x0  nop
    ctx->pc = 0x2ec1e8u;
    // NOP
    // 0x2ec1ec: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ec1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ec1f0: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2ec1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2ec1f4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2ec1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2ec1f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec1f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec1fc: 0x0  nop
    ctx->pc = 0x2ec1fcu;
    // NOP
    // 0x2ec200: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2ec200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2ec204: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ec204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ec208: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2EC208u;
    SET_GPR_U32(ctx, 31, 0x2EC210u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2EC208u, 0x2EC210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC210u;
label_2ec210:
    // 0x2ec210: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2ec210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2ec214: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ec214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec218: 0x0  nop
    ctx->pc = 0x2ec218u;
    // NOP
    // 0x2ec21c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ec21cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec220: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2ec220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2ec224: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ec224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ec228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec22c: 0x0  nop
    ctx->pc = 0x2ec22cu;
    // NOP
    // 0x2ec230: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2ec230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2ec234: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ec234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ec238: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2EC238u;
    SET_GPR_U32(ctx, 31, 0x2EC240u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2EC238u, 0x2EC240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC240u;
label_2ec240:
    // 0x2ec240: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2ec240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2ec244: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ec244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec248: 0x0  nop
    ctx->pc = 0x2ec248u;
    // NOP
    // 0x2ec24c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ec24cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec250: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2ec250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2ec254: 0x3c0441c8  lui         $a0, 0x41C8
    ctx->pc = 0x2ec254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16840 << 16));
    // 0x2ec258: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ec258u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec25c: 0x0  nop
    ctx->pc = 0x2ec25cu;
    // NOP
    // 0x2ec260: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2ec260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2ec264: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x2ec264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x2ec268: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2ec268u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec26c: 0x0  nop
    ctx->pc = 0x2ec26cu;
    // NOP
    // 0x2ec270: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2ec270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2ec274: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ec274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ec278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec27c: 0x0  nop
    ctx->pc = 0x2ec27cu;
    // NOP
    // 0x2ec280: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2ec280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2ec284: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ec284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ec288: 0x344351ec  ori         $v1, $v0, 0x51EC
    ctx->pc = 0x2ec288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ec28c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ec28cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec290: 0x0  nop
    ctx->pc = 0x2ec290u;
    // NOP
    // 0x2ec294: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2ec294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2ec298: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2ec298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2ec29c: 0x346251ec  ori         $v0, $v1, 0x51EC
    ctx->pc = 0x2ec29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2ec2a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec2a4: 0x0  nop
    ctx->pc = 0x2ec2a4u;
    // NOP
    // 0x2ec2a8: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2ec2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2ec2ac: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2ec2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2ec2b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec2b4: 0x0  nop
    ctx->pc = 0x2ec2b4u;
    // NOP
    // 0x2ec2b8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2ec2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2ec2bc: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x2ec2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x2ec2c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec2c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec2c4: 0x0  nop
    ctx->pc = 0x2ec2c4u;
    // NOP
    // 0x2ec2c8: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2ec2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2ec2cc: 0x3c073f66  lui         $a3, 0x3F66
    ctx->pc = 0x2ec2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16230 << 16));
    // 0x2ec2d0: 0x34e26666  ori         $v0, $a3, 0x6666
    ctx->pc = 0x2ec2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)26214);
    // 0x2ec2d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec2d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec2d8: 0x0  nop
    ctx->pc = 0x2ec2d8u;
    // NOP
    // 0x2ec2dc: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2ec2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2ec2e0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ec2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ec2e4: 0x8c267508  lw          $a2, 0x7508($at)
    ctx->pc = 0x2ec2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x387508u));
    // 0x2ec2e8: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x2ec2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2ec2ec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ec2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ec2f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ec2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ec2f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ec2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ec2f8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2ec2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2ec2fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ec2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ec300: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2ec300u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2ec304: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2ec304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ec308: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ec308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ec30c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec310: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2ec310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2ec314: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2ec314u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2ec318: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ec318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ec31c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ec31cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ec320: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2ec320u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ec324: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ec324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ec328: 0x30440006  andi        $a0, $v0, 0x6
    ctx->pc = 0x2ec328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2ec32c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2ec32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2ec330: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x2ec330u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ec334: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EC334u;
    SET_GPR_U32(ctx, 31, 0x2EC33Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EC334u, 0x2EC33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC33Cu;
label_2ec33c:
    // 0x2ec33c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2ec33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2ec340: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x2ec340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2ec344: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2ec344u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec348: 0x0  nop
    ctx->pc = 0x2ec348u;
    // NOP
    // 0x2ec34c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ec34cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec350: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2ec350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2ec354: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EC354u;
    SET_GPR_U32(ctx, 31, 0x2EC35Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EC354u, 0x2EC35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC35Cu;
label_2ec35c:
    // 0x2ec35c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2ec35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2ec360: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ec360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ec364: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ec364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec368: 0x0  nop
    ctx->pc = 0x2ec368u;
    // NOP
    // 0x2ec36c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ec36cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec370: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2ec370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2ec374: 0x0  nop
    ctx->pc = 0x2ec374u;
    // NOP
    ctx->pc = 0x2ec378u;
}
