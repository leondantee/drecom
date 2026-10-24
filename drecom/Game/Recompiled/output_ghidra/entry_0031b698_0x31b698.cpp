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

// Function: entry_0031b698
// Address: 0x31b698 - 0x31b8ac
void entry_0031b698_0x31b698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031b698_0x31b698");
#endif

    switch (ctx->pc) {
        case 0x31b6b4u: goto label_31b6b4;
        case 0x31b6ccu: goto label_31b6cc;
        case 0x31b6f8u: goto label_31b6f8;
        default: break;
    }

    ctx->pc = 0x31b698u;

    // 0x31b698: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b69c: 0x8c4412ac  lw          $a0, 0x12AC($v0)
    ctx->pc = 0x31b69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b6a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b6a4: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x31b6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31b6a8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31b6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31b6ac: 0xc05db20  jal         func_176C80
    ctx->pc = 0x31B6ACu;
    SET_GPR_U32(ctx, 31, 0x31B6B4u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x31B6ACu, 0x31B6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B6B4u;
label_31b6b4:
    // 0x31b6b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b6b8: 0x8c4412ac  lw          $a0, 0x12AC($v0)
    ctx->pc = 0x31b6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b6bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b6c0: 0xc44c12cc  lwc1        $f12, 0x12CC($v0)
    ctx->pc = 0x31b6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31b6c4: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x31B6C4u;
    SET_GPR_U32(ctx, 31, 0x31B6CCu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x31B6C4u, 0x31B6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B6CCu;
label_31b6cc:
    // 0x31b6cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b6d0: 0x8c4412ac  lw          $a0, 0x12AC($v0)
    ctx->pc = 0x31b6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b6d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b6d8: 0xc44112cc  lwc1        $f1, 0x12CC($v0)
    ctx->pc = 0x31b6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31b6dc: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x31b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x31b6e0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x31b6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x31b6e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31b6e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b6e8: 0x0  nop
    ctx->pc = 0x31b6e8u;
    // NOP
    // 0x31b6ec: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x31b6ecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31b6f0: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x31B6F0u;
    SET_GPR_U32(ctx, 31, 0x31B6F8u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x31B6F0u, 0x31B6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B6F8u;
label_31b6f8:
    // 0x31b6f8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x31b6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b6fc: 0x8c8312b4  lw          $v1, 0x12B4($a0)
    ctx->pc = 0x31b6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4788)));
    // 0x31b700: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31b700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31b704: 0xac8312b4  sw          $v1, 0x12B4($a0)
    ctx->pc = 0x31b704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4788), GPR_U32(ctx, 3));
    // 0x31b708: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b70c: 0x8c6312b4  lw          $v1, 0x12B4($v1)
    ctx->pc = 0x31b70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4788)));
    // 0x31b710: 0x28610015  slti        $at, $v1, 0x15
    ctx->pc = 0x31b710u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x31b714: 0x14200065  bnez        $at, . + 4 + (0x65 << 2)
    ctx->pc = 0x31B714u;
    {
        const bool branch_taken_0x31b714 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b714) {
            ctx->pc = 0x31B8ACu;
            return;
        }
    }
    ctx->pc = 0x31B71Cu;
    // 0x31b71c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x31b71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b720: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x31b720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x31b724: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x31b724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x31b728: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31b728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31b72c: 0xc48012cc  lwc1        $f0, 0x12CC($a0)
    ctx->pc = 0x31b72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b730: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31b730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31b734: 0xe48012cc  swc1        $f0, 0x12CC($a0)
    ctx->pc = 0x31b734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4812), bits); }
    // 0x31b738: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b73c: 0x8c6412ac  lw          $a0, 0x12AC($v1)
    ctx->pc = 0x31b73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4780)));
    // 0x31b740: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x31b740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31b744: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31b744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b748: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x31b748u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31b74c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x31b74cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x31b750: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x31b750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x31b754: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x31b754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b758: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x31b758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x31b75c: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x31b75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x31b760: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31b760u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31b764: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x31b764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b768: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31b768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31b76c: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x31b76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x31b770: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b774: 0x8c6412ac  lw          $a0, 0x12AC($v1)
    ctx->pc = 0x31b774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4780)));
    // 0x31b778: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x31b778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31b77c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b780: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x31b780u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31b784: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x31b784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x31b788: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x31b788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x31b78c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x31b78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b790: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x31b790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x31b794: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x31b794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x31b798: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31b798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31b79c: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x31b79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b7a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31b7a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31b7a4: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x31b7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x31b7a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b7ac: 0x8c6412ac  lw          $a0, 0x12AC($v1)
    ctx->pc = 0x31b7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4780)));
    // 0x31b7b0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x31b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31b7b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31b7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b7b8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x31b7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31b7bc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x31b7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x31b7c0: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x31b7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x31b7c4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x31b7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b7c8: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x31b7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x31b7cc: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x31b7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x31b7d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31b7d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31b7d4: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x31b7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b7d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31b7d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31b7dc: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x31b7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x31b7e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b7e4: 0x8c6412ac  lw          $a0, 0x12AC($v1)
    ctx->pc = 0x31b7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4780)));
    // 0x31b7e8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x31b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31b7ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31b7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b7f0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x31b7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31b7f4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x31b7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x31b7f8: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x31b7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x31b7fc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x31b7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b800: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x31b800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x31b804: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x31b804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x31b808: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31b808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31b80c: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x31b80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b810: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31b810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31b814: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x31b814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x31b818: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b81c: 0x8c6412ac  lw          $a0, 0x12AC($v1)
    ctx->pc = 0x31b81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4780)));
    // 0x31b820: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x31b820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31b824: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31b824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b828: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x31b828u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31b82c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x31b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x31b830: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x31b830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x31b834: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x31b834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b838: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x31b838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x31b83c: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x31b83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x31b840: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31b840u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31b844: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x31b844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b848: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31b848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31b84c: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x31b84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x31b850: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b854: 0x8c6412ac  lw          $a0, 0x12AC($v1)
    ctx->pc = 0x31b854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4780)));
    // 0x31b858: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x31b858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31b85c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31b85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b860: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x31b860u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31b864: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x31b864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x31b868: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x31b868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x31b86c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x31b86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b870: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x31b870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x31b874: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x31b874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x31b878: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31b878u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31b87c: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x31b87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b880: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31b880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31b884: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x31b884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x31b888: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b88c: 0x8c6412ac  lw          $a0, 0x12AC($v1)
    ctx->pc = 0x31b88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4780)));
    // 0x31b890: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x31b890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31b894: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31b894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b898: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x31b898u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31b89c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x31b89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x31b8a0: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x31b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x31b8a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31b8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b8a8: 0xac60007c  sw          $zero, 0x7C($v1)
    ctx->pc = 0x31b8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 0));
    ctx->pc = 0x31b8acu;
}
