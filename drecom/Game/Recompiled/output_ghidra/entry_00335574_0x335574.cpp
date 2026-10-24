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

// Function: entry_00335574
// Address: 0x335574 - 0x335794
void entry_00335574_0x335574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00335574_0x335574");
#endif

    switch (ctx->pc) {
        case 0x335584u: goto label_335584;
        case 0x335764u: goto label_335764;
        case 0x335774u: goto label_335774;
        default: break;
    }

    ctx->pc = 0x335574u;

    // 0x335574: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x335574u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x335578: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x335578u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x33557c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x33557Cu;
    SET_GPR_U32(ctx, 31, 0x335584u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x33557Cu, 0x335584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335584u;
label_335584:
    // 0x335584: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x335584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x335588: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x335588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x33558c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x33558cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x335590: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x335590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x335594: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x335594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x335598: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x335598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x33559c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x33559cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3355a0: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x3355a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x3355a4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3355a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3355a8: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x3355a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x3355ac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3355acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3355b0: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x3355b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x3355b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3355b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3355b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3355b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3355bc: 0x26620018  addiu       $v0, $s3, 0x18
    ctx->pc = 0x3355bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x3355c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3355c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3355c4: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x3355c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x3355c8: 0x2662001c  addiu       $v0, $s3, 0x1C
    ctx->pc = 0x3355c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x3355cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3355ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3355d0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x3355d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3355d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3355d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3355d8: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x3355d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x3355dc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3355dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3355e0: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x3355e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x3355e4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3355e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3355e8: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x3355e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x3355ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3355ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3355f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3355f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3355f4: 0x26620024  addiu       $v0, $s3, 0x24
    ctx->pc = 0x3355f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    // 0x3355f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3355f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3355fc: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x3355fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x335600: 0x26620028  addiu       $v0, $s3, 0x28
    ctx->pc = 0x335600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x335604: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x335604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x335608: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x335608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x33560c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x33560cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x335610: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x335610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x335614: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x335614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335618: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x335618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x33561c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33561cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x335620: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x335620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x335624: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x335624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x335628: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x335628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33562c: 0x26620030  addiu       $v0, $s3, 0x30
    ctx->pc = 0x33562cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x335630: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x335630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x335634: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x335634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x335638: 0x26620034  addiu       $v0, $s3, 0x34
    ctx->pc = 0x335638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
    // 0x33563c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x33563cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x335640: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x335640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x335644: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x335644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x335648: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x335648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x33564c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33564cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335650: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x335650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x335654: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x335654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x335658: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x335658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x33565c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x33565cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x335660: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x335660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x335664: 0x2662003c  addiu       $v0, $s3, 0x3C
    ctx->pc = 0x335664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
    // 0x335668: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x335668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x33566c: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x33566cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x335670: 0x26620040  addiu       $v0, $s3, 0x40
    ctx->pc = 0x335670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x335674: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x335674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x335678: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x335678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x33567c: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x33567cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x335680: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x335680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x335684: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x335684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x335688: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33568c: 0x942233b0  lhu         $v0, 0x33B0($at)
    ctx->pc = 0x33568cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8933B0u));
    // 0x335690: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x335690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335694: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x335694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x335698: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33569c: 0x942233b2  lhu         $v0, 0x33B2($at)
    ctx->pc = 0x33569cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8933B2u));
    // 0x3356a0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3356a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3356a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3356a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3356a8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3356a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3356ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3356acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3356b0: 0x26620014  addiu       $v0, $s3, 0x14
    ctx->pc = 0x3356b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x3356b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3356b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3356b8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3356b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3356bc: 0x942233b4  lhu         $v0, 0x33B4($at)
    ctx->pc = 0x3356bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8933B4u));
    // 0x3356c0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3356c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3356c4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3356c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3356c8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3356c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3356cc: 0x942233b2  lhu         $v0, 0x33B2($at)
    ctx->pc = 0x3356ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8933B2u));
    // 0x3356d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3356d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3356d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3356d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3356d8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3356d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3356dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3356dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3356e0: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x3356e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x3356e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3356e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3356e8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3356e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3356ec: 0x942233b0  lhu         $v0, 0x33B0($at)
    ctx->pc = 0x3356ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8933B0u));
    // 0x3356f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3356f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3356f4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3356f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3356f8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3356f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3356fc: 0x942233b6  lhu         $v0, 0x33B6($at)
    ctx->pc = 0x3356fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8933B6u));
    // 0x335700: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x335700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335704: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x335704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x335708: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x335708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x33570c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33570cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x335710: 0x2662002c  addiu       $v0, $s3, 0x2C
    ctx->pc = 0x335710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    // 0x335714: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x335714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x335718: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33571c: 0x942233b4  lhu         $v0, 0x33B4($at)
    ctx->pc = 0x33571cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8933B4u));
    // 0x335720: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x335720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335724: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x335724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x335728: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33572c: 0x942233b6  lhu         $v0, 0x33B6($at)
    ctx->pc = 0x33572cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8933B6u));
    // 0x335730: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x335730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335734: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x335734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x335738: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x335738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x33573c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33573cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x335740: 0x26620038  addiu       $v0, $s3, 0x38
    ctx->pc = 0x335740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x335744: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x335744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x335748: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x335748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33574c: 0x2442e7d0  addiu       $v0, $v0, -0x1830
    ctx->pc = 0x33574cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
    // 0x335750: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x335750u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x335754: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x335754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x335758: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x335758u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x33575c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x33575Cu;
    SET_GPR_U32(ctx, 31, 0x335764u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x33575Cu, 0x335764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335764u;
label_335764:
    // 0x335764: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x335764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x335768: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x335768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x33576c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x33576Cu;
    SET_GPR_U32(ctx, 31, 0x335774u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x33576Cu, 0x335774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335774u;
label_335774:
    // 0x335774: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x335774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x335778: 0x8c226570  lw          $v0, 0x6570($at)
    ctx->pc = 0x335778u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x396570u));
    // 0x33577c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33577Cu;
    {
        const bool branch_taken_0x33577c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33577c) {
            ctx->pc = 0x335794u;
            return;
        }
    }
    ctx->pc = 0x335784u;
    // 0x335784: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x335784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x335788: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x335788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x33578c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x33578Cu;
    SET_GPR_U32(ctx, 31, 0x335794u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x33578Cu, 0x335794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335794u;
}
