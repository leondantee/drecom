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

// Function: Em19_R0_init
// Address: 0x2e38f0 - 0x2e3e10
void Em19_R0_init_0x2e38f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19_R0_init_0x2e38f0");
#endif

    switch (ctx->pc) {
        case 0x2e3960u: goto label_2e3960;
        case 0x2e39c0u: goto label_2e39c0;
        case 0x2e3a28u: goto label_2e3a28;
        case 0x2e3a3cu: goto label_2e3a3c;
        case 0x2e3a60u: goto label_2e3a60;
        case 0x2e3a74u: goto label_2e3a74;
        case 0x2e3a98u: goto label_2e3a98;
        case 0x2e3aacu: goto label_2e3aac;
        case 0x2e3ad0u: goto label_2e3ad0;
        case 0x2e3ae4u: goto label_2e3ae4;
        case 0x2e3af0u: goto label_2e3af0;
        case 0x2e3b34u: goto label_2e3b34;
        case 0x2e3b44u: goto label_2e3b44;
        case 0x2e3b58u: goto label_2e3b58;
        case 0x2e3b6cu: goto label_2e3b6c;
        case 0x2e3b7cu: goto label_2e3b7c;
        case 0x2e3ba0u: goto label_2e3ba0;
        case 0x2e3bc0u: goto label_2e3bc0;
        case 0x2e3bd8u: goto label_2e3bd8;
        case 0x2e3bf4u: goto label_2e3bf4;
        case 0x2e3c10u: goto label_2e3c10;
        case 0x2e3c2cu: goto label_2e3c2c;
        case 0x2e3c38u: goto label_2e3c38;
        case 0x2e3c74u: goto label_2e3c74;
        case 0x2e3c9cu: goto label_2e3c9c;
        case 0x2e3cc8u: goto label_2e3cc8;
        case 0x2e3ce8u: goto label_2e3ce8;
        case 0x2e3d48u: goto label_2e3d48;
        case 0x2e3d64u: goto label_2e3d64;
        case 0x2e3d70u: goto label_2e3d70;
        default: break;
    }

    ctx->pc = 0x2e38f0u;

    // 0x2e38f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2e38f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2e38f4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x2e38f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x2e38f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2e38f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2e38fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2e38fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2e3900: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e3900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2e3904: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e3904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e3908: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e3908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e390c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e390cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e3910: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e3910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e3914: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e3914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e3918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e3918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e391c: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x2e391cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x2e3920: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e3920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3924: 0x24521330  addiu       $s2, $v0, 0x1330
    ctx->pc = 0x2e3924u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2e3928: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e3928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e392c: 0x245410b0  addiu       $s4, $v0, 0x10B0
    ctx->pc = 0x2e392cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2e3930: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2e3930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2e3934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3938: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e3938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e393c: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2e393cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x2e3940: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2e3940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2e3944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3948: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e3948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e394c: 0xe44011e4  swc1        $f0, 0x11E4($v0)
    ctx->pc = 0x2e394cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4580), bits); }
    // 0x2e3950: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x2e3950u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2e3954: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e3954u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e3958: 0xc06246c  jal         func_1891B0
    ctx->pc = 0x2E3958u;
    SET_GPR_U32(ctx, 31, 0x2E3960u);
    ctx->pc = 0x1891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1891B0u, 0x2E3958u, 0x2E3960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3960u;
label_2e3960:
    // 0x2e3960: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x2e3960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x2e3964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3968: 0x0  nop
    ctx->pc = 0x2e3968u;
    // NOP
    // 0x2e396c: 0xe68000d0  swc1        $f0, 0xD0($s4)
    ctx->pc = 0x2e396cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 208), bits); }
    // 0x2e3970: 0xe68000d4  swc1        $f0, 0xD4($s4)
    ctx->pc = 0x2e3970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 212), bits); }
    // 0x2e3974: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e3974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2e3978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e397c: 0x0  nop
    ctx->pc = 0x2e397cu;
    // NOP
    // 0x2e3980: 0xe68000d8  swc1        $f0, 0xD8($s4)
    ctx->pc = 0x2e3980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 216), bits); }
    // 0x2e3984: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2e3984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2e3988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e398c: 0x0  nop
    ctx->pc = 0x2e398cu;
    // NOP
    // 0x2e3990: 0xe68000e4  swc1        $f0, 0xE4($s4)
    ctx->pc = 0x2e3990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 228), bits); }
    // 0x2e3994: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e3994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3998: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x2e3998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2e399c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2e399cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x2e39a0: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x2e39a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x2e39a4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e39a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e39a8: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2e39a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2e39ac: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x2e39acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x2e39b0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e39b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e39b4: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x2e39b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2e39b8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E39B8u;
    SET_GPR_U32(ctx, 31, 0x2E39C0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E39B8u, 0x2E39C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E39C0u;
label_2e39c0:
    // 0x2e39c0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e39c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2e39c4: 0x24438b80  addiu       $v1, $v0, -0x7480
    ctx->pc = 0x2e39c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937472));
    // 0x2e39c8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e39c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e39cc: 0xac431228  sw          $v1, 0x1228($v0)
    ctx->pc = 0x2e39ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4648), GPR_U32(ctx, 3));
    // 0x2e39d0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2e39d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2e39d4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e39d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e39d8: 0xac43121c  sw          $v1, 0x121C($v0)
    ctx->pc = 0x2e39d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4636), GPR_U32(ctx, 3));
    // 0x2e39dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e39dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e39e0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e39e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e39e4: 0xa0431219  sb          $v1, 0x1219($v0)
    ctx->pc = 0x2e39e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4633), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e39e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e39e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e39ec: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e39ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e39f0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2e39f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e39f4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e39f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e39f8: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2e39f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e39fc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e39fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3a00: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2e3a00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3a04: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e3a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3a08: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2e3a08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3a0c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e3a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3a10: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2e3a10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2e3a14: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e3a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3a18: 0x24440234  addiu       $a0, $v0, 0x234
    ctx->pc = 0x2e3a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 564));
    // 0x2e3a1c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2e3a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e3a20: 0xc06b0ec  jal         func_1AC3B0
    ctx->pc = 0x2E3A20u;
    SET_GPR_U32(ctx, 31, 0x2E3A28u);
    ctx->pc = 0x1AC3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC3B0u, 0x2E3A20u, 0x2E3A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3A28u;
label_2e3a28:
    // 0x2e3a28: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e3a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3a2c: 0x2444023c  addiu       $a0, $v0, 0x23C
    ctx->pc = 0x2e3a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 572));
    // 0x2e3a30: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2e3a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e3a34: 0xc06b0ec  jal         func_1AC3B0
    ctx->pc = 0x2E3A34u;
    SET_GPR_U32(ctx, 31, 0x2E3A3Cu);
    ctx->pc = 0x1AC3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC3B0u, 0x2E3A34u, 0x2E3A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3A3Cu;
label_2e3a3c:
    // 0x2e3a3c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2e3a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3a40: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e3a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3a44: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x2e3a44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x2e3a48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e3a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e3a4c: 0x30460080  andi        $a2, $v0, 0x80
    ctx->pc = 0x2e3a4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2e3a50: 0x24640244  addiu       $a0, $v1, 0x244
    ctx->pc = 0x2e3a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 580));
    // 0x2e3a54: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2e3a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e3a58: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x2E3A58u;
    SET_GPR_U32(ctx, 31, 0x2E3A60u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x2E3A58u, 0x2E3A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3A60u;
label_2e3a60:
    // 0x2e3a60: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x2e3a60u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e3a64: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x2e3a64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x2e3a68: 0x26c50080  addiu       $a1, $s6, 0x80
    ctx->pc = 0x2e3a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 128));
    // 0x2e3a6c: 0xc0757b8  jal         func_1D5EE0
    ctx->pc = 0x2E3A6Cu;
    SET_GPR_U32(ctx, 31, 0x2E3A74u);
    ctx->pc = 0x1D5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5EE0u, 0x2E3A6Cu, 0x2E3A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3A74u;
label_2e3a74:
    // 0x2e3a74: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2e3a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3a78: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e3a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3a7c: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x2e3a7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x2e3a80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e3a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e3a84: 0x30460080  andi        $a2, $v0, 0x80
    ctx->pc = 0x2e3a84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2e3a88: 0x2464024c  addiu       $a0, $v1, 0x24C
    ctx->pc = 0x2e3a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 588));
    // 0x2e3a8c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2e3a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e3a90: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x2E3A90u;
    SET_GPR_U32(ctx, 31, 0x2E3A98u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x2E3A90u, 0x2E3A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3A98u;
label_2e3a98:
    // 0x2e3a98: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x2e3a98u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e3a9c: 0x72e02628  paddub      $a0, $s7, $zero
    ctx->pc = 0x2e3a9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x2e3aa0: 0x26e50040  addiu       $a1, $s7, 0x40
    ctx->pc = 0x2e3aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
    // 0x2e3aa4: 0xc075844  jal         func_1D6110
    ctx->pc = 0x2E3AA4u;
    SET_GPR_U32(ctx, 31, 0x2E3AACu);
    ctx->pc = 0x1D6110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6110u, 0x2E3AA4u, 0x2E3AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3AACu;
label_2e3aac:
    // 0x2e3aac: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2e3aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3ab0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e3ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3ab4: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x2e3ab4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x2e3ab8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e3ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e3abc: 0x30460080  andi        $a2, $v0, 0x80
    ctx->pc = 0x2e3abcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2e3ac0: 0x24640254  addiu       $a0, $v1, 0x254
    ctx->pc = 0x2e3ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 596));
    // 0x2e3ac4: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x2e3ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2e3ac8: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x2E3AC8u;
    SET_GPR_U32(ctx, 31, 0x2E3AD0u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x2E3AC8u, 0x2E3AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3AD0u;
label_2e3ad0:
    // 0x2e3ad0: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x2e3ad0u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e3ad4: 0x73c02628  paddub      $a0, $fp, $zero
    ctx->pc = 0x2e3ad4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x2e3ad8: 0x27c500c0  addiu       $a1, $fp, 0xC0
    ctx->pc = 0x2e3ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 192));
    // 0x2e3adc: 0xc0758c8  jal         func_1D6320
    ctx->pc = 0x2E3ADCu;
    SET_GPR_U32(ctx, 31, 0x2E3AE4u);
    ctx->pc = 0x1D6320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6320u, 0x2E3ADCu, 0x2E3AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3AE4u;
label_2e3ae4:
    // 0x2e3ae4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2e3ae4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e3ae8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2E3AE8u;
    {
        const bool branch_taken_0x2e3ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3ae8) {
            ctx->pc = 0x2E3BA8u;
            goto label_2e3ba8;
        }
    }
    ctx->pc = 0x2E3AF0u;
label_2e3af0:
    // 0x2e3af0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2e3af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2e3af4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e3af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2e3af8: 0x24428c08  addiu       $v0, $v0, -0x73F8
    ctx->pc = 0x2e3af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937608));
    // 0x2e3afc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e3afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e3b00: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2e3b00u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3b04: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2e3b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3b08: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x2e3b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2e3b0c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2e3b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2e3b10: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e3b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e3b14: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x2e3b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2e3b18: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2e3b18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e3b1c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2e3b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2e3b20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e3b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e3b24: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2e3b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3b28: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x2e3b28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2e3b2c: 0xc05d428  jal         func_1750A0
    ctx->pc = 0x2E3B2Cu;
    SET_GPR_U32(ctx, 31, 0x2E3B34u);
    ctx->pc = 0x1750A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1750A0u, 0x2E3B2Cu, 0x2E3B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3B34u;
label_2e3b34:
    // 0x2e3b34: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2e3b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3b38: 0x2405025c  addiu       $a1, $zero, 0x25C
    ctx->pc = 0x2e3b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    // 0x2e3b3c: 0xc0960d0  jal         func_258340
    ctx->pc = 0x2E3B3Cu;
    SET_GPR_U32(ctx, 31, 0x2E3B44u);
    ctx->pc = 0x258340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258340u, 0x2E3B3Cu, 0x2E3B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3B44u;
label_2e3b44:
    // 0x2e3b44: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2e3b44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2e3b48: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2e3b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e3b4c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2e3b4cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e3b50: 0xc0961d0  jal         func_258740
    ctx->pc = 0x2E3B50u;
    SET_GPR_U32(ctx, 31, 0x2E3B58u);
    ctx->pc = 0x258740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258740u, 0x2E3B50u, 0x2E3B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3B58u;
label_2e3b58:
    // 0x2e3b58: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2e3b58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2e3b5c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2e3b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e3b60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e3b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3b64: 0xc0961d0  jal         func_258740
    ctx->pc = 0x2E3B64u;
    SET_GPR_U32(ctx, 31, 0x2E3B6Cu);
    ctx->pc = 0x258740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258740u, 0x2E3B64u, 0x2E3B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3B6Cu;
label_2e3b6c:
    // 0x2e3b6c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2e3b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3b70: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x2e3b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2e3b74: 0xc09620c  jal         func_258830
    ctx->pc = 0x2E3B74u;
    SET_GPR_U32(ctx, 31, 0x2E3B7Cu);
    ctx->pc = 0x258830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258830u, 0x2E3B74u, 0x2E3B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3B7Cu;
label_2e3b7c:
    // 0x2e3b7c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2e3b7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2e3b80: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2e3b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2e3b84: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2e3b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2e3b88: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e3b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e3b8c: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x2e3b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x2e3b90: 0x34421400  ori         $v0, $v0, 0x1400
    ctx->pc = 0x2e3b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x2e3b94: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x2e3b94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e3b98: 0xc096410  jal         func_259040
    ctx->pc = 0x2E3B98u;
    SET_GPR_U32(ctx, 31, 0x2E3BA0u);
    ctx->pc = 0x259040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259040u, 0x2E3B98u, 0x2E3BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3BA0u;
label_2e3ba0:
    // 0x2e3ba0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e3ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e3ba4: 0x0  nop
    ctx->pc = 0x2e3ba4u;
    // NOP
label_2e3ba8:
    // 0x2e3ba8: 0x1a00ffd1  blez        $s0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x2E3BA8u;
    {
        const bool branch_taken_0x2e3ba8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2e3ba8) {
            ctx->pc = 0x2E3AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3af0;
        }
    }
    ctx->pc = 0x2E3BB0u;
    // 0x2e3bb0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2e3bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3bb4: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x2e3bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2e3bb8: 0xc096290  jal         func_258A40
    ctx->pc = 0x2E3BB8u;
    SET_GPR_U32(ctx, 31, 0x2E3BC0u);
    ctx->pc = 0x258A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A40u, 0x2E3BB8u, 0x2E3BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3BC0u;
label_2e3bc0:
    // 0x2e3bc0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e3bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3bc4: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x2e3bc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2e3bc8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2e3bc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2e3bcc: 0x24053001  addiu       $a1, $zero, 0x3001
    ctx->pc = 0x2e3bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x2e3bd0: 0xc0963e8  jal         func_258FA0
    ctx->pc = 0x2E3BD0u;
    SET_GPR_U32(ctx, 31, 0x2E3BD8u);
    ctx->pc = 0x258FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258FA0u, 0x2E3BD0u, 0x2E3BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3BD8u;
label_2e3bd8:
    // 0x2e3bd8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2e3bd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e3bdc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2e3bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2e3be0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2e3be0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e3be4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2e3be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3be8: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x2e3be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2e3bec: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x2E3BECu;
    SET_GPR_U32(ctx, 31, 0x2E3BF4u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x2E3BECu, 0x2E3BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3BF4u;
label_2e3bf4:
    // 0x2e3bf4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3bf8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2e3bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2e3bfc: 0x24510990  addiu       $s1, $v0, 0x990
    ctx->pc = 0x2e3bfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2448));
    // 0x2e3c00: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2e3c00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2e3c04: 0x24053001  addiu       $a1, $zero, 0x3001
    ctx->pc = 0x2e3c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x2e3c08: 0xc0963e8  jal         func_258FA0
    ctx->pc = 0x2E3C08u;
    SET_GPR_U32(ctx, 31, 0x2E3C10u);
    ctx->pc = 0x258FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258FA0u, 0x2E3C08u, 0x2E3C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C10u;
label_2e3c10:
    // 0x2e3c10: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2e3c10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e3c14: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2e3c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2e3c18: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2e3c18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e3c1c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2e3c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3c20: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2e3c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2e3c24: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x2E3C24u;
    SET_GPR_U32(ctx, 31, 0x2E3C2Cu);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x2E3C24u, 0x2E3C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C2Cu;
label_2e3c2c:
    // 0x2e3c2c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2e3c2cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e3c30: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2E3C30u;
    {
        const bool branch_taken_0x2e3c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3c30) {
            ctx->pc = 0x2E3C80u;
            goto label_2e3c80;
        }
    }
    ctx->pc = 0x2E3C38u;
label_2e3c38:
    // 0x2e3c38: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2e3c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2e3c3c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e3c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2e3c40: 0x24428c10  addiu       $v0, $v0, -0x73F0
    ctx->pc = 0x2e3c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937616));
    // 0x2e3c44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e3c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e3c48: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2e3c48u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3c4c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2e3c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3c50: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x2e3c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2e3c54: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2e3c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2e3c58: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e3c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e3c5c: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x2e3c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2e3c60: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2e3c60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e3c64: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2e3c64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2e3c68: 0x24053001  addiu       $a1, $zero, 0x3001
    ctx->pc = 0x2e3c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x2e3c6c: 0xc0963e8  jal         func_258FA0
    ctx->pc = 0x2E3C6Cu;
    SET_GPR_U32(ctx, 31, 0x2E3C74u);
    ctx->pc = 0x258FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258FA0u, 0x2E3C6Cu, 0x2E3C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C74u;
label_2e3c74:
    // 0x2e3c74: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2e3c74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3c78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e3c78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e3c7c: 0x0  nop
    ctx->pc = 0x2e3c7cu;
    // NOP
label_2e3c80:
    // 0x2e3c80: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x2e3c80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2e3c84: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2E3C84u;
    {
        const bool branch_taken_0x2e3c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3c84) {
            ctx->pc = 0x2E3C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3c38;
        }
    }
    ctx->pc = 0x2E3C8Cu;
    // 0x2e3c8c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2e3c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3c90: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2e3c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2e3c94: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x2E3C94u;
    SET_GPR_U32(ctx, 31, 0x2E3C9Cu);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x2E3C94u, 0x2E3C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C9Cu;
label_2e3c9c:
    // 0x2e3c9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e3c9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3ca0: 0x0  nop
    ctx->pc = 0x2e3ca0u;
    // NOP
    // 0x2e3ca4: 0xe640005c  swc1        $f0, 0x5C($s2)
    ctx->pc = 0x2e3ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
    // 0x2e3ca8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e3ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e3cac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3cb0: 0x0  nop
    ctx->pc = 0x2e3cb0u;
    // NOP
    // 0x2e3cb4: 0xe6400060  swc1        $f0, 0x60($s2)
    ctx->pc = 0x2e3cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x2e3cb8: 0xa2400064  sb          $zero, 0x64($s2)
    ctx->pc = 0x2e3cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3cbc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2e3cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3cc0: 0xc0b8fa4  jal         func_2E3E90
    ctx->pc = 0x2E3CC0u;
    SET_GPR_U32(ctx, 31, 0x2E3CC8u);
    ctx->pc = 0x2E3E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3E90u, 0x2E3CC0u, 0x2E3CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3CC8u;
label_2e3cc8:
    // 0x2e3cc8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2e3cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e3ccc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e3cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3cd0: 0xa0431218  sb          $v1, 0x1218($v0)
    ctx->pc = 0x2e3cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4632), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e3cd4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2e3cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3cd8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2e3cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e3cdc: 0x24451214  addiu       $a1, $v0, 0x1214
    ctx->pc = 0x2e3cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4628));
    // 0x2e3ce0: 0xc06299c  jal         func_18A670
    ctx->pc = 0x2E3CE0u;
    SET_GPR_U32(ctx, 31, 0x2E3CE8u);
    ctx->pc = 0x18A670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A670u, 0x2E3CE0u, 0x2E3CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3CE8u;
label_2e3ce8:
    // 0x2e3ce8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e3ce8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3cec: 0x0  nop
    ctx->pc = 0x2e3cecu;
    // NOP
    // 0x2e3cf0: 0xe6400090  swc1        $f0, 0x90($s2)
    ctx->pc = 0x2e3cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 144), bits); }
    // 0x2e3cf4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e3cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e3cf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3cfc: 0x0  nop
    ctx->pc = 0x2e3cfcu;
    // NOP
    // 0x2e3d00: 0xe64000dc  swc1        $f0, 0xDC($s2)
    ctx->pc = 0x2e3d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 220), bits); }
    // 0x2e3d04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e3d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e3d08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3d0c: 0x0  nop
    ctx->pc = 0x2e3d0cu;
    // NOP
    // 0x2e3d10: 0xe64000bc  swc1        $f0, 0xBC($s2)
    ctx->pc = 0x2e3d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 188), bits); }
    // 0x2e3d14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e3d14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3d18: 0x0  nop
    ctx->pc = 0x2e3d18u;
    // NOP
    // 0x2e3d1c: 0xe64000c8  swc1        $f0, 0xC8($s2)
    ctx->pc = 0x2e3d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 200), bits); }
    // 0x2e3d20: 0xe64000c4  swc1        $f0, 0xC4($s2)
    ctx->pc = 0x2e3d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 196), bits); }
    // 0x2e3d24: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x2e3d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
    // 0x2e3d28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e3d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3d2c: 0x0  nop
    ctx->pc = 0x2e3d2cu;
    // NOP
    // 0x2e3d30: 0xe64000d8  swc1        $f0, 0xD8($s2)
    ctx->pc = 0x2e3d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
    // 0x2e3d34: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x2e3d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
    // 0x2e3d38: 0xe64000d0  swc1        $f0, 0xD0($s2)
    ctx->pc = 0x2e3d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
    // 0x2e3d3c: 0x264400b0  addiu       $a0, $s2, 0xB0
    ctx->pc = 0x2e3d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x2e3d40: 0xc05da88  jal         func_176A20
    ctx->pc = 0x2E3D40u;
    SET_GPR_U32(ctx, 31, 0x2E3D48u);
    ctx->pc = 0x176A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A20u, 0x2E3D40u, 0x2E3D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3D48u;
label_2e3d48:
    // 0x2e3d48: 0xae4200e4  sw          $v0, 0xE4($s2)
    ctx->pc = 0x2e3d48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 2));
    // 0x2e3d4c: 0xa24000ea  sb          $zero, 0xEA($s2)
    ctx->pc = 0x2e3d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 234), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3d50: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2e3d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3d54: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e3d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2e3d58: 0x24458d10  addiu       $a1, $v0, -0x72F0
    ctx->pc = 0x2e3d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937872));
    // 0x2e3d5c: 0xc099c30  jal         func_2670C0
    ctx->pc = 0x2E3D5Cu;
    SET_GPR_U32(ctx, 31, 0x2E3D64u);
    ctx->pc = 0x2670C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2670C0u, 0x2E3D5Cu, 0x2E3D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3D64u;
label_2e3d64:
    // 0x2e3d64: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2e3d64u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e3d68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3D68u;
    {
        const bool branch_taken_0x2e3d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3d68) {
            ctx->pc = 0x2E3D80u;
            goto label_2e3d80;
        }
    }
    ctx->pc = 0x2E3D70u;
label_2e3d70:
    // 0x2e3d70: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x2e3d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2e3d74: 0xa0600083  sb          $zero, 0x83($v1)
    ctx->pc = 0x2e3d74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 131), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3d78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e3d78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e3d7c: 0x0  nop
    ctx->pc = 0x2e3d7cu;
    // NOP
label_2e3d80:
    // 0x2e3d80: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x2e3d80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e3d84: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E3D84u;
    {
        const bool branch_taken_0x2e3d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3d84) {
            ctx->pc = 0x2E3D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3d70;
        }
    }
    ctx->pc = 0x2E3D8Cu;
    // 0x2e3d8c: 0xa640006e  sh          $zero, 0x6E($s2)
    ctx->pc = 0x2e3d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 110), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e3d90: 0xa6400070  sh          $zero, 0x70($s2)
    ctx->pc = 0x2e3d90u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e3d94: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2e3d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3d98: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e3d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e3d9c: 0x24752710  addiu       $s5, $v1, 0x2710
    ctx->pc = 0x2e3d9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 10000));
    // 0x2e3da0: 0x96a30140  lhu         $v1, 0x140($s5)
    ctx->pc = 0x2e3da0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 320)));
    // 0x2e3da4: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x2e3da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x2e3da8: 0xa6a30140  sh          $v1, 0x140($s5)
    ctx->pc = 0x2e3da8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e3dac: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2e3dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x2e3db0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e3db0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3db4: 0x0  nop
    ctx->pc = 0x2e3db4u;
    // NOP
    // 0x2e3db8: 0xe6a00128  swc1        $f0, 0x128($s5)
    ctx->pc = 0x2e3db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 296), bits); }
    // 0x2e3dbc: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2e3dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x2e3dc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e3dc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3dc4: 0x0  nop
    ctx->pc = 0x2e3dc4u;
    // NOP
    // 0x2e3dc8: 0xe6a0012c  swc1        $f0, 0x12C($s5)
    ctx->pc = 0x2e3dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 300), bits); }
    // 0x2e3dcc: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2e3dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x2e3dd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e3dd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3dd4: 0x0  nop
    ctx->pc = 0x2e3dd4u;
    // NOP
    // 0x2e3dd8: 0xe6a00130  swc1        $f0, 0x130($s5)
    ctx->pc = 0x2e3dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 304), bits); }
    // 0x2e3ddc: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x2e3ddcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e3de0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2e3de0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e3de4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2e3de4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e3de8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e3de8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e3dec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e3decu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e3df0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e3df0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e3df4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e3df4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e3df8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e3df8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3dfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e3dfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3e00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e3e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3e04: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2e3e04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2e3e08: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3E10u;
}
