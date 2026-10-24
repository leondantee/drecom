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

// Function: R409_main
// Address: 0x2838f0 - 0x283efc
void R409_main_0x2838f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R409_main_0x2838f0");
#endif

    switch (ctx->pc) {
        case 0x283a20u: goto label_283a20;
        case 0x283aacu: goto label_283aac;
        case 0x283b20u: goto label_283b20;
        case 0x283b68u: goto label_283b68;
        case 0x283ba0u: goto label_283ba0;
        case 0x283c38u: goto label_283c38;
        case 0x283c44u: goto label_283c44;
        case 0x283c90u: goto label_283c90;
        case 0x283c9cu: goto label_283c9c;
        case 0x283cccu: goto label_283ccc;
        case 0x283ce8u: goto label_283ce8;
        case 0x283d10u: goto label_283d10;
        case 0x283d48u: goto label_283d48;
        case 0x283d80u: goto label_283d80;
        case 0x283de4u: goto label_283de4;
        case 0x283e18u: goto label_283e18;
        case 0x283e44u: goto label_283e44;
        case 0x283e94u: goto label_283e94;
        case 0x283ea4u: goto label_283ea4;
        case 0x283ebcu: goto label_283ebc;
        case 0x283ed0u: goto label_283ed0;
        case 0x283ee0u: goto label_283ee0;
        default: break;
    }

    ctx->pc = 0x2838f0u;

    // 0x2838f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2838f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2838f4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x2838f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x2838f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2838f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2838fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2838fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x283900: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x283900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x283904: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x283904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x283908: 0x8c22bb48  lw          $v0, -0x44B8($at)
    ctx->pc = 0x283908u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB48u));
    // 0x28390c: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x28390cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x283910: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x283910u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283914: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x283914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x283918: 0x8c22bb48  lw          $v0, -0x44B8($at)
    ctx->pc = 0x283918u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB48u));
    // 0x28391c: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x28391cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x283920: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x283920u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x283924: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x283924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x283928: 0x8c231a9c  lw          $v1, 0x1A9C($at)
    ctx->pc = 0x283928u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A9Cu));
    // 0x28392c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28392cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x283930: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x283930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x283934: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x283934u;
    {
        const bool branch_taken_0x283934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283934) {
            ctx->pc = 0x283AB4u;
            goto label_283ab4;
        }
    }
    ctx->pc = 0x28393Cu;
    // 0x28393c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x28393cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x283940: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x283940u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283944: 0x3c02c4fa  lui         $v0, 0xC4FA
    ctx->pc = 0x283944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50426 << 16));
    // 0x283948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28394c: 0x0  nop
    ctx->pc = 0x28394cu;
    // NOP
    // 0x283950: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x283950u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283954: 0x0  nop
    ctx->pc = 0x283954u;
    // NOP
    // 0x283958: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x283958u;
    {
        const bool branch_taken_0x283958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x283958) {
            ctx->pc = 0x283994u;
            goto label_283994;
        }
    }
    ctx->pc = 0x283960u;
    // 0x283960: 0x3c02c5fb  lui         $v0, 0xC5FB
    ctx->pc = 0x283960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50683 << 16));
    // 0x283964: 0x34420429  ori         $v0, $v0, 0x429
    ctx->pc = 0x283964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1065);
    // 0x283968: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28396c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x28396cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x283970: 0xe420dce0  swc1        $f0, -0x2320($at)
    ctx->pc = 0x283970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE0u, _value); } while (0); }
    // 0x283974: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x283974u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283978: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x283978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x28397c: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x28397cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x283980: 0x3c02c14e  lui         $v0, 0xC14E
    ctx->pc = 0x283980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49486 << 16));
    // 0x283984: 0x34428f5c  ori         $v0, $v0, 0x8F5C
    ctx->pc = 0x283984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36700);
    // 0x283988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28398c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x28398cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x283990: 0xe420dce8  swc1        $f0, -0x2318($at)
    ctx->pc = 0x283990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE8u, _value); } while (0); }
label_283994:
    // 0x283994: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x283994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x283998: 0x8c30fa68  lw          $s0, -0x598($at)
    ctx->pc = 0x283998u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61FA68u));
    // 0x28399c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x28399cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2839a0: 0x3c023b03  lui         $v0, 0x3B03
    ctx->pc = 0x2839a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
    // 0x2839a4: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x2839a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2839a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2839a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2839ac: 0x0  nop
    ctx->pc = 0x2839acu;
    // NOP
    // 0x2839b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2839b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2839b4: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x2839b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x2839b8: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x2839b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2839bc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2839bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2839c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2839c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2839c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2839c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2839c8: 0x0  nop
    ctx->pc = 0x2839c8u;
    // NOP
    // 0x2839cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2839ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2839d0: 0x0  nop
    ctx->pc = 0x2839d0u;
    // NOP
    // 0x2839d4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2839D4u;
    {
        const bool branch_taken_0x2839d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2839d4) {
            ctx->pc = 0x2839F8u;
            goto label_2839f8;
        }
    }
    ctx->pc = 0x2839DCu;
    // 0x2839dc: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x2839dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2839e0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2839e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x2839e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2839e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2839e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2839e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2839ec: 0x0  nop
    ctx->pc = 0x2839ecu;
    // NOP
    // 0x2839f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2839f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2839f4: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x2839f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_2839f8:
    // 0x2839f8: 0x8e110058  lw          $s1, 0x58($s0)
    ctx->pc = 0x2839f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2839fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2839fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x283a00: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x283a00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x283a04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x283a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x283a08: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x283a08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x283a0c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x283a0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x283a10: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x283a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x283a14: 0x34452003  ori         $a1, $v0, 0x2003
    ctx->pc = 0x283a14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8195);
    // 0x283a18: 0xc077a5c  jal         func_1DE970
    ctx->pc = 0x283A18u;
    SET_GPR_U32(ctx, 31, 0x283A20u);
    ctx->pc = 0x1DE970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE970u, 0x283A18u, 0x283A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283A20u;
label_283a20:
    // 0x283a20: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x283a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x283a24: 0x8c30fa6c  lw          $s0, -0x594($at)
    ctx->pc = 0x283a24u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61FA6Cu));
    // 0x283a28: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x283a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283a2c: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x283a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x283a30: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x283a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x283a34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283a38: 0x0  nop
    ctx->pc = 0x283a38u;
    // NOP
    // 0x283a3c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x283a3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x283a40: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x283a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x283a44: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x283a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283a48: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x283a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x283a4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x283a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x283a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283a54: 0x0  nop
    ctx->pc = 0x283a54u;
    // NOP
    // 0x283a58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x283a58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283a5c: 0x0  nop
    ctx->pc = 0x283a5cu;
    // NOP
    // 0x283a60: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x283A60u;
    {
        const bool branch_taken_0x283a60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x283a60) {
            ctx->pc = 0x283A84u;
            goto label_283a84;
        }
    }
    ctx->pc = 0x283A68u;
    // 0x283a68: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x283a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283a6c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x283a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x283a70: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x283a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x283a74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283a78: 0x0  nop
    ctx->pc = 0x283a78u;
    // NOP
    // 0x283a7c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x283a7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x283a80: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x283a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_283a84:
    // 0x283a84: 0x8e110058  lw          $s1, 0x58($s0)
    ctx->pc = 0x283a84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x283a88: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x283a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x283a8c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x283a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x283a90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x283a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x283a94: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x283a94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x283a98: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x283a98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x283a9c: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x283a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x283aa0: 0x34452003  ori         $a1, $v0, 0x2003
    ctx->pc = 0x283aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8195);
    // 0x283aa4: 0xc077a5c  jal         func_1DE970
    ctx->pc = 0x283AA4u;
    SET_GPR_U32(ctx, 31, 0x283AACu);
    ctx->pc = 0x1DE970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE970u, 0x283AA4u, 0x283AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283AACu;
label_283aac:
    // 0x283aac: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x283AACu;
    {
        const bool branch_taken_0x283aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283aac) {
            ctx->pc = 0x283EE0u;
            goto label_283ee0;
        }
    }
    ctx->pc = 0x283AB4u;
label_283ab4:
    // 0x283ab4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x283ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x283ab8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x283ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x283abc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x283abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x283ac0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x283ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x283ac4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x283ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x283ac8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x283ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x283acc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x283accu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x283ad0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x283ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x283ad4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x283ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x283ad8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x283ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x283adc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x283adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x283ae0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x283ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x283ae4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x283ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x283ae8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x283ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x283aec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x283aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x283af0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x283af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x283af4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x283af4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x283af8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x283af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x283afc: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x283afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x283b00: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x283b00u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x283b04: 0x0  nop
    ctx->pc = 0x283b04u;
    // NOP
    // 0x283b08: 0x0  nop
    ctx->pc = 0x283b08u;
    // NOP
    // 0x283b0c: 0x1010  mfhi        $v0
    ctx->pc = 0x283b0cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x283b10: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x283B10u;
    {
        const bool branch_taken_0x283b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283b10) {
            ctx->pc = 0x283C9Cu;
            goto label_283c9c;
        }
    }
    ctx->pc = 0x283B18u;
    // 0x283b18: 0xc06765c  jal         func_19D970
    ctx->pc = 0x283B18u;
    SET_GPR_U32(ctx, 31, 0x283B20u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x283B18u, 0x283B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283B20u;
label_283b20:
    // 0x283b20: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x283b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x283b24: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x283b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x283b28: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x283b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x283b2c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x283b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x283b30: 0x3c02c66a  lui         $v0, 0xC66A
    ctx->pc = 0x283b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50794 << 16));
    // 0x283b34: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x283b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x283b38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283b3c: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x283b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283b40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x283b40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283b44: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x283b44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x283b48: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x283b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x283b4c: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x283b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x283b50: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x283b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x283b54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283b58: 0x0  nop
    ctx->pc = 0x283b58u;
    // NOP
    // 0x283b5c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x283b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x283b60: 0xc06765c  jal         func_19D970
    ctx->pc = 0x283B60u;
    SET_GPR_U32(ctx, 31, 0x283B68u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x283B60u, 0x283B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283B68u;
label_283b68:
    // 0x283b68: 0x3c024694  lui         $v0, 0x4694
    ctx->pc = 0x283b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18068 << 16));
    // 0x283b6c: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x283b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x283b70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283b74: 0x0  nop
    ctx->pc = 0x283b74u;
    // NOP
    // 0x283b78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x283b78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283b7c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x283b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x283b80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x283b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x283b84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283b88: 0x0  nop
    ctx->pc = 0x283b88u;
    // NOP
    // 0x283b8c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x283b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x283b90: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x283b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283b94: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x283b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x283b98: 0xc06765c  jal         func_19D970
    ctx->pc = 0x283B98u;
    SET_GPR_U32(ctx, 31, 0x283BA0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x283B98u, 0x283BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283BA0u;
label_283ba0:
    // 0x283ba0: 0x3c02455a  lui         $v0, 0x455A
    ctx->pc = 0x283ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17754 << 16));
    // 0x283ba4: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x283ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x283ba8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283bac: 0x0  nop
    ctx->pc = 0x283bacu;
    // NOP
    // 0x283bb0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x283bb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283bb4: 0x3c02c59c  lui         $v0, 0xC59C
    ctx->pc = 0x283bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50588 << 16));
    // 0x283bb8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x283bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x283bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283bc0: 0x0  nop
    ctx->pc = 0x283bc0u;
    // NOP
    // 0x283bc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x283bc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x283bc8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x283bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x283bcc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x283bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283bd0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x283bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x283bd4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x283bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x283bd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283bdc: 0x0  nop
    ctx->pc = 0x283bdcu;
    // NOP
    // 0x283be0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x283be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x283be4: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x283be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x283be8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x283be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x283bec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x283becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x283bf0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x283bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x283bf4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x283bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x283bf8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x283bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x283bfc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x283bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x283c00: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x283c00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x283c04: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x283c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x283c08: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x283c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x283c0c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x283c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x283c10: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x283c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x283c14: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x283c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x283c18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x283c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x283c1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x283c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x283c20: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x283c20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x283c24: 0x24043301  addiu       $a0, $zero, 0x3301
    ctx->pc = 0x283c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13057));
    // 0x283c28: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x283c28u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x283c2c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x283c2cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x283c30: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x283C30u;
    SET_GPR_U32(ctx, 31, 0x283C38u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x283C30u, 0x283C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283C38u;
label_283c38:
    // 0x283c38: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x283c38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x283c3c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x283C3Cu;
    SET_GPR_U32(ctx, 31, 0x283C44u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x283C3Cu, 0x283C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283C44u;
label_283c44:
    // 0x283c44: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x283c44u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x283c48: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x283c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x283c4c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x283c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x283c50: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x283C50u;
    {
        const bool branch_taken_0x283c50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x283c50) {
            ctx->pc = 0x283C78u;
            goto label_283c78;
        }
    }
    ctx->pc = 0x283C58u;
    // 0x283c58: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x283c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x283c5c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x283c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x283c60: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x283c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x283c64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283c68: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x283c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283c6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x283c6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283c70: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x283c70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x283c74: 0xe64002dc  swc1        $f0, 0x2DC($s2)
    ctx->pc = 0x283c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 732), bits); }
label_283c78:
    // 0x283c78: 0x34049302  ori         $a0, $zero, 0x9302
    ctx->pc = 0x283c78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37634);
    // 0x283c7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x283c7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x283c80: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x283c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x283c84: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x283c84u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x283c88: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x283C88u;
    SET_GPR_U32(ctx, 31, 0x283C90u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x283C88u, 0x283C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283C90u;
label_283c90:
    // 0x283c90: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x283c90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x283c94: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x283C94u;
    SET_GPR_U32(ctx, 31, 0x283C9Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x283C94u, 0x283C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283C9Cu;
label_283c9c:
    // 0x283c9c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x283c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x283ca0: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x283ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x283ca4: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x283ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x283ca8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x283ca8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283cac: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x283cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x283cb0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x283cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x283cb4: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x283cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x283cb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283cbc: 0x0  nop
    ctx->pc = 0x283cbcu;
    // NOP
    // 0x283cc0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x283cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x283cc4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x283CC4u;
    SET_GPR_U32(ctx, 31, 0x283CCCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x283CC4u, 0x283CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283CCCu;
label_283ccc:
    // 0x283ccc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x283cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x283cd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283cd4: 0x0  nop
    ctx->pc = 0x283cd4u;
    // NOP
    // 0x283cd8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x283cd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283cdc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x283cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x283ce0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x283CE0u;
    SET_GPR_U32(ctx, 31, 0x283CE8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x283CE0u, 0x283CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283CE8u;
label_283ce8:
    // 0x283ce8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x283ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x283cec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283cf0: 0x0  nop
    ctx->pc = 0x283cf0u;
    // NOP
    // 0x283cf4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x283cf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283cf8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x283cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x283cfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x283cfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283d00: 0x0  nop
    ctx->pc = 0x283d00u;
    // NOP
    // 0x283d04: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x283d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x283d08: 0xc06765c  jal         func_19D970
    ctx->pc = 0x283D08u;
    SET_GPR_U32(ctx, 31, 0x283D10u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x283D08u, 0x283D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283D10u;
label_283d10:
    // 0x283d10: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x283d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x283d14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283d18: 0x0  nop
    ctx->pc = 0x283d18u;
    // NOP
    // 0x283d1c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x283d1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283d20: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x283d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x283d24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283d28: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x283d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283d2c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x283d2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283d30: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x283d30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x283d34: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x283d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283d38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x283d38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x283d3c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x283d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x283d40: 0xc06765c  jal         func_19D970
    ctx->pc = 0x283D40u;
    SET_GPR_U32(ctx, 31, 0x283D48u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x283D40u, 0x283D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283D48u;
label_283d48:
    // 0x283d48: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x283d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x283d4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283d50: 0x0  nop
    ctx->pc = 0x283d50u;
    // NOP
    // 0x283d54: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x283d54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283d58: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x283d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x283d5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283d60: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x283d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283d64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x283d64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283d68: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x283d68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x283d6c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x283d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283d70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x283d70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x283d74: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x283d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x283d78: 0xc06765c  jal         func_19D970
    ctx->pc = 0x283D78u;
    SET_GPR_U32(ctx, 31, 0x283D80u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x283D78u, 0x283D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283D80u;
label_283d80:
    // 0x283d80: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x283d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x283d84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283d84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283d88: 0x0  nop
    ctx->pc = 0x283d88u;
    // NOP
    // 0x283d8c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x283d8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283d90: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x283d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x283d94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283d98: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x283d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283d9c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x283d9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283da0: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x283da0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x283da4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x283da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283da8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x283da8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x283dac: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x283dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x283db0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x283db0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283db4: 0x0  nop
    ctx->pc = 0x283db4u;
    // NOP
    // 0x283db8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x283db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x283dbc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x283dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x283dc0: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x283dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x283dc4: 0xc4410194  lwc1        $f1, 0x194($v0)
    ctx->pc = 0x283dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283dc8: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x283dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283dcc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x283dccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283dd0: 0x0  nop
    ctx->pc = 0x283dd0u;
    // NOP
    // 0x283dd4: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x283DD4u;
    {
        const bool branch_taken_0x283dd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x283dd4) {
            ctx->pc = 0x283E3Cu;
            goto label_283e3c;
        }
    }
    ctx->pc = 0x283DDCu;
    // 0x283ddc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x283DDCu;
    SET_GPR_U32(ctx, 31, 0x283DE4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x283DDCu, 0x283DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283DE4u;
label_283de4:
    // 0x283de4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x283de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x283de8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283dec: 0x0  nop
    ctx->pc = 0x283decu;
    // NOP
    // 0x283df0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x283df0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283df4: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x283df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x283df8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283dfc: 0x0  nop
    ctx->pc = 0x283dfcu;
    // NOP
    // 0x283e00: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x283e00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x283e04: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x283e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283e08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x283e08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x283e0c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x283e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x283e10: 0xc06765c  jal         func_19D970
    ctx->pc = 0x283E10u;
    SET_GPR_U32(ctx, 31, 0x283E18u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x283E10u, 0x283E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283E18u;
label_283e18:
    // 0x283e18: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x283e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x283e1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283e20: 0x0  nop
    ctx->pc = 0x283e20u;
    // NOP
    // 0x283e24: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x283e24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283e28: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x283e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283e2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x283e2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x283e30: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x283e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x283e34: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x283E34u;
    {
        const bool branch_taken_0x283e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283e34) {
            ctx->pc = 0x283E70u;
            goto label_283e70;
        }
    }
    ctx->pc = 0x283E3Cu;
label_283e3c:
    // 0x283e3c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x283E3Cu;
    SET_GPR_U32(ctx, 31, 0x283E44u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x283E3Cu, 0x283E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283E44u;
label_283e44:
    // 0x283e44: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x283e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x283e48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283e4c: 0x0  nop
    ctx->pc = 0x283e4cu;
    // NOP
    // 0x283e50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x283e50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283e54: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x283e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x283e58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283e58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283e5c: 0x0  nop
    ctx->pc = 0x283e5cu;
    // NOP
    // 0x283e60: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x283e60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x283e64: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x283e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283e68: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x283e68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x283e6c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x283e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_283e70:
    // 0x283e70: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x283e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x283e74: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x283e74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x283e78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x283e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x283e7c: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x283e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x283e80: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x283e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x283e84: 0x246501a0  addiu       $a1, $v1, 0x1A0
    ctx->pc = 0x283e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
    // 0x283e88: 0x24460190  addiu       $a2, $v0, 0x190
    ctx->pc = 0x283e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x283e8c: 0xc040c80  jal         func_103200
    ctx->pc = 0x283E8Cu;
    SET_GPR_U32(ctx, 31, 0x283E94u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x283E94u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x283E94u) { return; }
    ctx->pc = 0x283E94u;
label_283e94:
    // 0x283e94: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x283e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x283e98: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x283e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x283e9c: 0xc040c24  jal         func_103090
    ctx->pc = 0x283E9Cu;
    SET_GPR_U32(ctx, 31, 0x283EA4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x283EA4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x283EA4u) { return; }
    ctx->pc = 0x283EA4u;
label_283ea4:
    // 0x283ea4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x283ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x283ea8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x283ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x283eac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x283eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x283eb0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x283eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x283eb4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x283EB4u;
    SET_GPR_U32(ctx, 31, 0x283EBCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x283EBCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x283EBCu) { return; }
    ctx->pc = 0x283EBCu;
label_283ebc:
    // 0x283ebc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x283ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x283ec0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x283ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x283ec4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x283ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x283ec8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x283EC8u;
    SET_GPR_U32(ctx, 31, 0x283ED0u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x283ED0u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x283ED0u) { return; }
    ctx->pc = 0x283ED0u;
label_283ed0:
    // 0x283ed0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x283ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x283ed4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x283ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x283ed8: 0xc0a0fc0  jal         func_283F00
    ctx->pc = 0x283ED8u;
    SET_GPR_U32(ctx, 31, 0x283EE0u);
    ctx->pc = 0x283F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283F00u, 0x283ED8u, 0x283EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283EE0u;
label_283ee0:
    // 0x283ee0: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x283ee0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283ee4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x283ee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283ee8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x283ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283eec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283ef0: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x283ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x283ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x283EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283EFCu;
}
