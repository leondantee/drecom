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

// Function: entry_0022894c
// Address: 0x22894c - 0x228a80
void entry_0022894c_0x22894c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022894c_0x22894c");
#endif

    switch (ctx->pc) {
        case 0x228a18u: goto label_228a18;
        case 0x228a20u: goto label_228a20;
        case 0x228a44u: goto label_228a44;
        case 0x228a78u: goto label_228a78;
        default: break;
    }

    ctx->pc = 0x22894cu;

    // 0x22894c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22894cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228950: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228954: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x228954u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x228958: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22895c: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x22895cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x228960: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x228960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x228964: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228968: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x228968u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x22896c: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x22896cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x228970: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228974: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x228974u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x228978: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x228978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x22897c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22897cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228980: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x228980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228984: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x228984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x228988: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x228988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x22898c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x22898cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x228990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228994: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228998: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x228998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22899c: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x22899cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
    // 0x2289a0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2289a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2289a4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2289a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2289a8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2289a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2289ac: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x2289acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2289b0: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2289b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2289b4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2289b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2289b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2289b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2289bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2289bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2289c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2289c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2289c4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2289c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2289c8: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2289c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x2289cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2289ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2289d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2289d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2289d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2289d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2289d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2289d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2289dc: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2289dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x2289e0: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x2289e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x2289e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2289e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2289e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2289e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2289ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2289ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2289f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2289f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2289f4: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2289f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2289f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2289f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2289fc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2289fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228a00: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x228a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x228a04: 0x24067802  addiu       $a2, $zero, 0x7802
    ctx->pc = 0x228a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30722));
    // 0x228a08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x228a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228a0c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x228a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x228a10: 0xc0965d0  jal         func_259740
    ctx->pc = 0x228A10u;
    SET_GPR_U32(ctx, 31, 0x228A18u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x228A10u, 0x228A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228A18u;
label_228a18:
    // 0x228a18: 0xc067694  jal         func_19DA50
    ctx->pc = 0x228A18u;
    SET_GPR_U32(ctx, 31, 0x228A20u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x228A18u, 0x228A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228A20u;
label_228a20:
    // 0x228a20: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x228a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x228a24: 0x3062003f  andi        $v0, $v1, 0x3F
    ctx->pc = 0x228a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x228a28: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x228a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x228a2c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228a30: 0x94430a00  lhu         $v1, 0xA00($v0)
    ctx->pc = 0x228a30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x228a34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x228a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x228a38: 0xa4430a00  sh          $v1, 0xA00($v0)
    ctx->pc = 0x228a38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2560), (uint16_t)GPR_U32(ctx, 3));
    // 0x228a3c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x228A3Cu;
    SET_GPR_U32(ctx, 31, 0x228A44u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x228A3Cu, 0x228A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228A44u;
label_228a44:
    // 0x228a44: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x228a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x228a48: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x228a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x228a4c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x228A4Cu;
    {
        const bool branch_taken_0x228a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228a4c) {
            ctx->pc = 0x228A80u;
            return;
        }
    }
    ctx->pc = 0x228A54u;
    // 0x228a54: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228a58: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x228a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x228a5c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x228a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x228a60: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x228a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x228a64: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x228a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x228a68: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x228a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x228a6c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x228a6cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x228a70: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x228A70u;
    SET_GPR_U32(ctx, 31, 0x228A78u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x228A70u, 0x228A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228A78u;
label_228a78:
    // 0x228a78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x228A78u;
    {
        const bool branch_taken_0x228a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228a78) {
            ctx->pc = 0x228AA8u;
            return;
        }
    }
    ctx->pc = 0x228A80u;
}
