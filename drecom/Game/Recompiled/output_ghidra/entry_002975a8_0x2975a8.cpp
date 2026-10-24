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

// Function: entry_002975a8
// Address: 0x2975a8 - 0x297674
void entry_002975a8_0x2975a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002975a8_0x2975a8");
#endif

    switch (ctx->pc) {
        case 0x297618u: goto label_297618;
        default: break;
    }

    ctx->pc = 0x2975a8u;

    // 0x2975a8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2975a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2975ac: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2975acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2975b0: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x2975b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2975b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2975b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2975b8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2975b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2975bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2975bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2975c0: 0x26620014  addiu       $v0, $s3, 0x14
    ctx->pc = 0x2975c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x2975c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2975c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2975c8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2975c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2975cc: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x2975ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2975d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2975d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2975d4: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x2975d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2975d8: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x2975d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2975dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2975dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2975e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2975e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2975e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2975e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2975e8: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x2975e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2975ec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2975ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2975f0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2975f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2975f4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2975f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2975f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2975f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2975fc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2975fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x297600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x297600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297604: 0x0  nop
    ctx->pc = 0x297604u;
    // NOP
    // 0x297608: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x297608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29760c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x29760cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x297610: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x297610u;
    SET_GPR_U32(ctx, 31, 0x297618u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x297610u, 0x297618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297618u;
label_297618:
    // 0x297618: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x297618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29761c: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x29761cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x297620: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x297620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x297624: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x297624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x297628: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x297628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x29762c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x29762cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x297630: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x297630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x297634: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x297634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x297638: 0x26620018  addiu       $v0, $s3, 0x18
    ctx->pc = 0x297638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x29763c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29763cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x297640: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x297640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x297644: 0x2662001c  addiu       $v0, $s3, 0x1C
    ctx->pc = 0x297644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x297648: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x297648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29764c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x29764cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x297650: 0x8e0269d4  lw          $v0, 0x69D4($s0)
    ctx->pc = 0x297650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27092)));
    // 0x297654: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x297654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x297658: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x297658u;
    {
        const bool branch_taken_0x297658 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x297658) {
            ctx->pc = 0x297674u;
            return;
        }
    }
    ctx->pc = 0x297660u;
    // 0x297660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x297660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297664: 0x0  nop
    ctx->pc = 0x297664u;
    // NOP
    // 0x297668: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x297668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29766c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29766Cu;
    {
        const bool branch_taken_0x29766c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29766c) {
            ctx->pc = 0x297690u;
            return;
        }
    }
    ctx->pc = 0x297674u;
}
