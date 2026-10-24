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

// Function: entry_0020bd88
// Address: 0x20bd88 - 0x20bf48
void entry_0020bd88_0x20bd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020bd88_0x20bd88");
#endif

    switch (ctx->pc) {
        case 0x20bdccu: goto label_20bdcc;
        case 0x20be1cu: goto label_20be1c;
        case 0x20be2cu: goto label_20be2c;
        case 0x20bea0u: goto label_20bea0;
        case 0x20bebcu: goto label_20bebc;
        case 0x20bed8u: goto label_20bed8;
        case 0x20bf3cu: goto label_20bf3c;
        default: break;
    }

    ctx->pc = 0x20bd88u;

    // 0x20bd88: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bd8c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x20bd8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x20bd90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20bd94: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x20bd94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x20bd98: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20bd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20bd9c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20bd9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20bda0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x20bda0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20bda4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x20bda4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x20bda8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20bda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bdac: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x20bdacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x20bdb0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20bdb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20bdb4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20bdb4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20bdb8: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x20bdb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x20bdbc: 0x102000da  beqz        $at, . + 4 + (0xDA << 2)
    ctx->pc = 0x20BDBCu;
    {
        const bool branch_taken_0x20bdbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bdbc) {
            ctx->pc = 0x20C128u;
            return;
        }
    }
    ctx->pc = 0x20BDC4u;
    // 0x20bdc4: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x20BDC4u;
    SET_GPR_U32(ctx, 31, 0x20BDCCu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x20BDC4u, 0x20BDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BDCCu;
label_20bdcc:
    // 0x20bdcc: 0x3c0245e1  lui         $v0, 0x45E1
    ctx->pc = 0x20bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17889 << 16));
    // 0x20bdd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20bdd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20bdd4: 0x0  nop
    ctx->pc = 0x20bdd4u;
    // NOP
    // 0x20bdd8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20bdd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20bddc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20bddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20bde0: 0xe42094e8  swc1        $f0, -0x6B18($at)
    ctx->pc = 0x20bde0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194E8u, _value); } while (0); }
    // 0x20bde4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20bde4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20bde8: 0xc42194e8  lwc1        $f1, -0x6B18($at)
    ctx->pc = 0x20bde8u;
    { uint32_t bits = FAST_READ32(0x6194E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20bdec: 0x3c02452f  lui         $v0, 0x452F
    ctx->pc = 0x20bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17711 << 16));
    // 0x20bdf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20bdf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20bdf4: 0x0  nop
    ctx->pc = 0x20bdf4u;
    // NOP
    // 0x20bdf8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20bdf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20bdfc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20bdfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20be00: 0xe42094e8  swc1        $f0, -0x6B18($at)
    ctx->pc = 0x20be00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194E8u, _value); } while (0); }
    // 0x20be04: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20be04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20be08: 0xc42cdce0  lwc1        $f12, -0x2320($at)
    ctx->pc = 0x20be08u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20be0c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20be0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20be10: 0xc42ddce8  lwc1        $f13, -0x2318($at)
    ctx->pc = 0x20be10u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20be14: 0xc0455e6  jal         func_115798
    ctx->pc = 0x20BE14u;
    SET_GPR_U32(ctx, 31, 0x20BE1Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x20BE14u, 0x20BE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE1Cu;
label_20be1c:
    // 0x20be1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20be1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20be20: 0xe42094f0  swc1        $f0, -0x6B10($at)
    ctx->pc = 0x20be20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194F0u, _value); } while (0); }
    // 0x20be24: 0xc06765c  jal         func_19D970
    ctx->pc = 0x20BE24u;
    SET_GPR_U32(ctx, 31, 0x20BE2Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20BE24u, 0x20BE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE2Cu;
label_20be2c:
    // 0x20be2c: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x20be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x20be30: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x20be30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x20be34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20be34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20be38: 0x0  nop
    ctx->pc = 0x20be38u;
    // NOP
    // 0x20be3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20be3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20be40: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20be40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20be44: 0xc42094f0  lwc1        $f0, -0x6B10($at)
    ctx->pc = 0x20be44u;
    { uint32_t bits = FAST_READ32(0x6194F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20be48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20be48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20be4c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20be4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20be50: 0xe42094f0  swc1        $f0, -0x6B10($at)
    ctx->pc = 0x20be50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194F0u, _value); } while (0); }
    // 0x20be54: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20be54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20be58: 0xc42094e8  lwc1        $f0, -0x6B18($at)
    ctx->pc = 0x20be58u;
    { uint32_t bits = FAST_READ32(0x6194E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20be5c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20be5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x20be60: 0xe420a2a8  swc1        $f0, -0x5D58($at)
    ctx->pc = 0x20be60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38A2A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38A2A8u, _value); } while (0); }
    // 0x20be64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20be64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20be68: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20be68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x20be6c: 0xe420a2a0  swc1        $f0, -0x5D60($at)
    ctx->pc = 0x20be6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38A2A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38A2A0u, _value); } while (0); }
    // 0x20be70: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20be70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20be74: 0xc42094e8  lwc1        $f0, -0x6B18($at)
    ctx->pc = 0x20be74u;
    { uint32_t bits = FAST_READ32(0x6194E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20be78: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20be78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x20be7c: 0xe420a2c8  swc1        $f0, -0x5D38($at)
    ctx->pc = 0x20be7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38A2C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38A2C8u, _value); } while (0); }
    // 0x20be80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20be80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20be84: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20be84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x20be88: 0xe420a2c0  swc1        $f0, -0x5D40($at)
    ctx->pc = 0x20be88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38A2C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38A2C0u, _value); } while (0); }
    // 0x20be8c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x20be8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20be90: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20be90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20be94: 0xc42c94f0  lwc1        $f12, -0x6B10($at)
    ctx->pc = 0x20be94u;
    { uint32_t bits = FAST_READ32(0x6194F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20be98: 0xc067844  jal         func_19E110
    ctx->pc = 0x20BE98u;
    SET_GPR_U32(ctx, 31, 0x20BEA0u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x20BE98u, 0x20BEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BEA0u;
label_20bea0:
    // 0x20bea0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20bea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20bea4: 0x2444a2a0  addiu       $a0, $v0, -0x5D60
    ctx->pc = 0x20bea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943392));
    // 0x20bea8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x20bea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20beac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20beacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20beb0: 0x2446a2a0  addiu       $a2, $v0, -0x5D60
    ctx->pc = 0x20beb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943392));
    // 0x20beb4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x20BEB4u;
    SET_GPR_U32(ctx, 31, 0x20BEBCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x20BEBCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20BEBCu) { return; }
    ctx->pc = 0x20BEBCu;
label_20bebc:
    // 0x20bebc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20bec0: 0x2444a2c0  addiu       $a0, $v0, -0x5D40
    ctx->pc = 0x20bec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943424));
    // 0x20bec4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x20bec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20bec8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20becc: 0x2446a2c0  addiu       $a2, $v0, -0x5D40
    ctx->pc = 0x20beccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943424));
    // 0x20bed0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x20BED0u;
    SET_GPR_U32(ctx, 31, 0x20BED8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x20BED8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20BED8u) { return; }
    ctx->pc = 0x20BED8u;
label_20bed8:
    // 0x20bed8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20bed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20bedc: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x20bedcu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20bee0: 0x3c0245fa  lui         $v0, 0x45FA
    ctx->pc = 0x20bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17914 << 16));
    // 0x20bee4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20bee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20bee8: 0x0  nop
    ctx->pc = 0x20bee8u;
    // NOP
    // 0x20beec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20beecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20bef0: 0x0  nop
    ctx->pc = 0x20bef0u;
    // NOP
    // 0x20bef4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x20BEF4u;
    {
        const bool branch_taken_0x20bef4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bef4) {
            ctx->pc = 0x20BF48u;
            return;
        }
    }
    ctx->pc = 0x20BEFCu;
    // 0x20befc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20befcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20bf00: 0x2442a2a0  addiu       $v0, $v0, -0x5D60
    ctx->pc = 0x20bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943392));
    // 0x20bf04: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20bf04u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38A2A0u));
    // 0x20bf08: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20bf0c: 0x2442a2b0  addiu       $v0, $v0, -0x5D50
    ctx->pc = 0x20bf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943408));
    // 0x20bf10: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20bf10u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x38A2B0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x38A2B0u, _value); } while (0);
    // 0x20bf14: 0x3c0245da  lui         $v0, 0x45DA
    ctx->pc = 0x20bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17882 << 16));
    // 0x20bf18: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x20bf18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x20bf1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20bf1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20bf20: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20bf20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x20bf24: 0xe420a2b4  swc1        $f0, -0x5D4C($at)
    ctx->pc = 0x20bf24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38A2B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38A2B4u, _value); } while (0); }
    // 0x20bf28: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20bf2c: 0x2444a2b0  addiu       $a0, $v0, -0x5D50
    ctx->pc = 0x20bf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943408));
    // 0x20bf30: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x20bf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20bf34: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x20BF34u;
    SET_GPR_U32(ctx, 31, 0x20BF3Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x20BF34u, 0x20BF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF3Cu;
label_20bf3c:
    // 0x20bf3c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x20bf3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x20bf40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20BF40u;
    {
        const bool branch_taken_0x20bf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bf40) {
            ctx->pc = 0x20BF60u;
            return;
        }
    }
    ctx->pc = 0x20BF48u;
}
