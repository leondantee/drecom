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

// Function: e2d_id86_type00
// Address: 0x2bda70 - 0x2bdc1c
void e2d_id86_type00_0x2bda70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id86_type00_0x2bda70");
#endif

    switch (ctx->pc) {
        case 0x2bdaa8u: goto label_2bdaa8;
        case 0x2bdad8u: goto label_2bdad8;
        case 0x2bdb00u: goto label_2bdb00;
        case 0x2bdb28u: goto label_2bdb28;
        default: break;
    }

    ctx->pc = 0x2bda70u;

    // 0x2bda70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bda70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bda74: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bda74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bda78: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bda78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bda7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bda7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bda80: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bda80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bda84: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x2bda84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bda88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bda88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bda8c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bda8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bda90: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2bda90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bda94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2bda94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bda98: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bda98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bda9c: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2bda9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bdaa0: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BDAA0u;
    SET_GPR_U32(ctx, 31, 0x2BDAA8u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BDAA0u, 0x2BDAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDAA8u;
label_2bdaa8:
    // 0x2bdaa8: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2bdaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2bdaac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bdaacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bdab0: 0x0  nop
    ctx->pc = 0x2bdab0u;
    // NOP
    // 0x2bdab4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bdab4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bdab8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2bdab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2bdabc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bdabcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdac0: 0x0  nop
    ctx->pc = 0x2bdac0u;
    // NOP
    // 0x2bdac4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bdac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bdac8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bdac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bdacc: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2bdaccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2bdad0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BDAD0u;
    SET_GPR_U32(ctx, 31, 0x2BDAD8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BDAD0u, 0x2BDAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDAD8u;
label_2bdad8:
    // 0x2bdad8: 0x3c024391  lui         $v0, 0x4391
    ctx->pc = 0x2bdad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17297 << 16));
    // 0x2bdadc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bdadcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bdae0: 0x0  nop
    ctx->pc = 0x2bdae0u;
    // NOP
    // 0x2bdae4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bdae4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bdae8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bdae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bdaec: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x2bdaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdaf0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bdaf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bdaf4: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x2bdaf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x2bdaf8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BDAF8u;
    SET_GPR_U32(ctx, 31, 0x2BDB00u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BDAF8u, 0x2BDB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDB00u;
label_2bdb00:
    // 0x2bdb00: 0x3c02438c  lui         $v0, 0x438C
    ctx->pc = 0x2bdb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17292 << 16));
    // 0x2bdb04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bdb04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bdb08: 0x0  nop
    ctx->pc = 0x2bdb08u;
    // NOP
    // 0x2bdb0c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bdb0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bdb10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bdb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bdb14: 0xc44000b4  lwc1        $f0, 0xB4($v0)
    ctx->pc = 0x2bdb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdb18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bdb18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bdb1c: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x2bdb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x2bdb20: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BDB20u;
    SET_GPR_U32(ctx, 31, 0x2BDB28u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BDB20u, 0x2BDB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDB28u;
label_2bdb28:
    // 0x2bdb28: 0x3c034391  lui         $v1, 0x4391
    ctx->pc = 0x2bdb28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17297 << 16));
    // 0x2bdb2c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bdb2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bdb30: 0x0  nop
    ctx->pc = 0x2bdb30u;
    // NOP
    // 0x2bdb34: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bdb34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bdb38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bdb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bdb3c: 0xc46000b8  lwc1        $f0, 0xB8($v1)
    ctx->pc = 0x2bdb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdb40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bdb40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bdb44: 0xe46000b8  swc1        $f0, 0xB8($v1)
    ctx->pc = 0x2bdb44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
    // 0x2bdb48: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bdb48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bdb4c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bdb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bdb50: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bdb50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bdb54: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bdb54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bdb58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bdb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bdb5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bdb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bdb60: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2bdb60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bdb64: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bdb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bdb68: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bdb68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bdb6c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bdb6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bdb70: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bdb70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bdb74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bdb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bdb78: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2bdb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2bdb7c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2bdb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2bdb80: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2bdb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2bdb84: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bdb84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bdb88: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2bdb88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bdb8c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bdb8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bdb90: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2bdb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2bdb94: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2bdb94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bdb98: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2bdb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bdb9c: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2bdb9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2bdba0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2bdba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2bdba4: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2bdba4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bdba8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bdba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bdbac: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bdbacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bdbb0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bdbb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bdbb4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bdbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bdbb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bdbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bdbbc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bdbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bdbc0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2bdbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bdbc4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bdbc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bdbc8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bdbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bdbcc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bdbccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bdbd0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bdbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bdbd4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bdbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bdbd8: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2bdbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2bdbdc: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2bdbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2bdbe0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2bdbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2bdbe4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bdbe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bdbe8: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2bdbe8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bdbec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bdbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bdbf0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2bdbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2bdbf4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2bdbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2bdbf8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2bdbf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bdbfc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2bdbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bdc00: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2bdc00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2bdc04: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2bdc04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2bdc08: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2bdc08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bdc0c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bdc0cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bdc10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bdc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bdc14: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDC1Cu;
}
