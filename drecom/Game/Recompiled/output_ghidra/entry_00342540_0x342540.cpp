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

// Function: entry_00342540
// Address: 0x342540 - 0x342ab4
void entry_00342540_0x342540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00342540_0x342540");
#endif

    switch (ctx->pc) {
        case 0x3428b0u: goto label_3428b0;
        case 0x3428bcu: goto label_3428bc;
        case 0x3428c8u: goto label_3428c8;
        case 0x3428d8u: goto label_3428d8;
        case 0x3428f8u: goto label_3428f8;
        case 0x342918u: goto label_342918;
        case 0x34295cu: goto label_34295c;
        case 0x3429b8u: goto label_3429b8;
        case 0x3429f4u: goto label_3429f4;
        case 0x342a74u: goto label_342a74;
        default: break;
    }

    ctx->pc = 0x342540u;

    // 0x342540: 0x8fb20118  lw          $s2, 0x118($sp)
    ctx->pc = 0x342540u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342544: 0x26421330  addiu       $v0, $s2, 0x1330
    ctx->pc = 0x342544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4912));
    // 0x342548: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x342548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x34254c: 0x24830005  addiu       $v1, $a0, 0x5
    ctx->pc = 0x34254cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x342550: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x342550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x342554: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342558: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x342558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34255c: 0x8c720024  lw          $s2, 0x24($v1)
    ctx->pc = 0x34255cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x342560: 0x26420005  addiu       $v0, $s2, 0x5
    ctx->pc = 0x342560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x342564: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x342564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x342568: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x34256c: 0x8c710058  lw          $s1, 0x58($v1)
    ctx->pc = 0x34256cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x342570: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x342570u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x342574: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342578: 0x24721330  addiu       $s2, $v1, 0x1330
    ctx->pc = 0x342578u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34257c: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x34257cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x342580: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x342580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x342584: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x342584u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x342588: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x34258c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34258cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x342590: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x342590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x342594: 0x8e120058  lw          $s2, 0x58($s0)
    ctx->pc = 0x342594u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x342598: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x342598u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x34259c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x34259cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3425a0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3425a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3425a4: 0x30c31fff  andi        $v1, $a2, 0x1FFF
    ctx->pc = 0x3425a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8191);
    // 0x3425a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3425a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3425ac: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x3425acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3425b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3425b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3425b4: 0x30521fff  andi        $s2, $v0, 0x1FFF
    ctx->pc = 0x3425b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x3425b8: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x3425b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x3425bc: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3425bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3425c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3425c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3425c4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x3425c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3425c8: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x3425c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3425cc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3425ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3425d0: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3425d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3425d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3425d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3425d8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x3425d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x3425dc: 0x8e15005c  lw          $s5, 0x5C($s0)
    ctx->pc = 0x3425dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3425e0: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x3425e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x3425e4: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x3425e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3425e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3425e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3425ec: 0x30a31fff  andi        $v1, $a1, 0x1FFF
    ctx->pc = 0x3425ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8191);
    // 0x3425f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3425f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3425f4: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x3425f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3425f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3425f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3425fc: 0x30441fff  andi        $a0, $v0, 0x1FFF
    ctx->pc = 0x3425fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x342600: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x342600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x342604: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342608: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x342608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x34260c: 0x24820120  addiu       $v0, $a0, 0x120
    ctx->pc = 0x34260cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x342610: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x342610u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x342614: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x342614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x342618: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x342618u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x34261c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x34261cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342620: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x342620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x342624: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x342624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x342628: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x342628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x34262c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x34262cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x342630: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342634: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x342634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x342638: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x342638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x34263c: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x34263cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x342640: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x342640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x342644: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x342644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x342648: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x342648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34264c: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x34264cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x342650: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x342650u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x342654: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x342654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x342658: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x342658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x34265c: 0x30431fff  andi        $v1, $v0, 0x1FFF
    ctx->pc = 0x34265cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x342660: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x342660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x342664: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342668: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x342668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34266c: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x34266cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x342670: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x342670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x342674: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x342674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x342678: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x34267c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34267cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x342680: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x342680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x342684: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x342684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x342688: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x342688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x34268c: 0x8e13005c  lw          $s3, 0x5C($s0)
    ctx->pc = 0x34268cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x342690: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x342690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x342694: 0x30621fff  andi        $v0, $v1, 0x1FFF
    ctx->pc = 0x342694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x342698: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x342698u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x34269c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x34269cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3426a0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3426a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3426a4: 0x30621fff  andi        $v0, $v1, 0x1FFF
    ctx->pc = 0x3426a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x3426a8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3426a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3426ac: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3426acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3426b0: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x3426b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x3426b4: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x3426b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x3426b8: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x3426b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x3426bc: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x3426bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3426c0: 0x8ca40058  lw          $a0, 0x58($a1)
    ctx->pc = 0x3426c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x3426c4: 0x24910240  addiu       $s1, $a0, 0x240
    ctx->pc = 0x3426c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 576));
    // 0x3426c8: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x3426c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3426cc: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3426ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3426d0: 0x24531330  addiu       $s3, $v0, 0x1330
    ctx->pc = 0x3426d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3426d4: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x3426d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x3426d8: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x3426d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3426dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3426dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3426e0: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3426e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3426e4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3426e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3426e8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x3426e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x3426ec: 0x8e110058  lw          $s1, 0x58($s0)
    ctx->pc = 0x3426ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3426f0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3426f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3426f4: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x3426f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3426f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3426f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3426fc: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x3426fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x342700: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x342700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x342704: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x342704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x342708: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x342708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x34270c: 0x30a61fff  andi        $a2, $a1, 0x1FFF
    ctx->pc = 0x34270cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8191);
    // 0x342710: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x342710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x342714: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342718: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x342718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34271c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x34271cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x342720: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x342720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x342724: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x342724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x342728: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x34272c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34272cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x342730: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x342730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x342734: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x342734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x342738: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x342738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x34273c: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x34273cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x342740: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x342740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x342744: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x342744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x342748: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x342748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34274c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x34274cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x342750: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x342750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x342754: 0x30a61fff  andi        $a2, $a1, 0x1FFF
    ctx->pc = 0x342754u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8191);
    // 0x342758: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x342758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x34275c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x34275cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342760: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x342760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x342764: 0x244202d0  addiu       $v0, $v0, 0x2D0
    ctx->pc = 0x342764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x342768: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x342768u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34276c: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x34276cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x342770: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342774: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x342774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x342778: 0x8ca60020  lw          $a2, 0x20($a1)
    ctx->pc = 0x342778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x34277c: 0x8e070058  lw          $a3, 0x58($s0)
    ctx->pc = 0x34277cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x342780: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x342780u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x342784: 0x8fa80118  lw          $t0, 0x118($sp)
    ctx->pc = 0x342784u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342788: 0x25091330  addiu       $t1, $t0, 0x1330
    ctx->pc = 0x342788u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
    // 0x34278c: 0x8d220024  lw          $v0, 0x24($t1)
    ctx->pc = 0x34278cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
    // 0x342790: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x342790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x342794: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x342794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x342798: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x342798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x34279c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34279cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3427a0: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x3427a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x3427a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3427a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3427a8: 0x8e140058  lw          $s4, 0x58($s0)
    ctx->pc = 0x3427a8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3427ac: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x3427acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3427b0: 0x30621fff  andi        $v0, $v1, 0x1FFF
    ctx->pc = 0x3427b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x3427b4: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x3427b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x3427b8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3427b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3427bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3427bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3427c0: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x3427c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3427c4: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x3427c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3427c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3427c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3427cc: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x3427ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3427d0: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x3427d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x3427d4: 0x8c860024  lw          $a2, 0x24($a0)
    ctx->pc = 0x3427d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3427d8: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x3427d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3427dc: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x3427dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x3427e0: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x3427e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3427e4: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x3427e4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3427e8: 0x32821fff  andi        $v0, $s4, 0x1FFF
    ctx->pc = 0x3427e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8191);
    // 0x3427ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3427ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3427f0: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x3427f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3427f4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3427f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3427f8: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x3427f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x3427fc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3427fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x342800: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342804: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x342804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x342808: 0x24420360  addiu       $v0, $v0, 0x360
    ctx->pc = 0x342808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x34280c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x34280cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x342810: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x342810u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x342814: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342818: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x342818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34281c: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x34281cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x342820: 0x8e060058  lw          $a2, 0x58($s0)
    ctx->pc = 0x342820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x342824: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x342824u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x342828: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x34282c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34282cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x342830: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x342830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x342834: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x342834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x342838: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x342838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x34283c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x34283cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x342840: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x342840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x342844: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x342844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x342848: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x342848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34284c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x34284cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x342850: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x342850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x342854: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x342854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x342858: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x342858u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x34285c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x34285cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342860: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x342860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x342864: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x342864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x342868: 0x8e06005c  lw          $a2, 0x5C($s0)
    ctx->pc = 0x342868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x34286c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x34286cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x342870: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342874: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x342874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x342878: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x342878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x34287c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x34287cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x342880: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x342880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x342884: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x342884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x342888: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x342888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34288c: 0x30a61fff  andi        $a2, $a1, 0x1FFF
    ctx->pc = 0x34288cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8191);
    // 0x342890: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x342890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x342894: 0x8e07005c  lw          $a3, 0x5C($s0)
    ctx->pc = 0x342894u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x342898: 0x8ce80004  lw          $t0, 0x4($a3)
    ctx->pc = 0x342898u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x34289c: 0x31091fff  andi        $t1, $t0, 0x1FFF
    ctx->pc = 0x34289cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8191);
    // 0x3428a0: 0xace90004  sw          $t1, 0x4($a3)
    ctx->pc = 0x3428a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 9));
    // 0x3428a4: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3428a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3428a8: 0xc0d4cd0  jal         func_353340
    ctx->pc = 0x3428A8u;
    SET_GPR_U32(ctx, 31, 0x3428B0u);
    ctx->pc = 0x353340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353340u, 0x3428A8u, 0x3428B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3428B0u;
label_3428b0:
    // 0x3428b0: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3428b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3428b4: 0xc0d4e24  jal         func_353890
    ctx->pc = 0x3428B4u;
    SET_GPR_U32(ctx, 31, 0x3428BCu);
    ctx->pc = 0x353890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353890u, 0x3428B4u, 0x3428BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3428BCu;
label_3428bc:
    // 0x3428bc: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3428bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3428c0: 0xc0d4ef4  jal         func_353BD0
    ctx->pc = 0x3428C0u;
    SET_GPR_U32(ctx, 31, 0x3428C8u);
    ctx->pc = 0x353BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353BD0u, 0x3428C0u, 0x3428C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3428C8u;
label_3428c8:
    // 0x3428c8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3428c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3428cc: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3428ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3428d0: 0xc0d5414  jal         func_355050
    ctx->pc = 0x3428D0u;
    SET_GPR_U32(ctx, 31, 0x3428D8u);
    ctx->pc = 0x355050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355050u, 0x3428D0u, 0x3428D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3428D8u;
label_3428d8:
    // 0x3428d8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3428d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3428dc: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x3428dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x3428e0: 0x248301b0  addiu       $v1, $a0, 0x1B0
    ctx->pc = 0x3428e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x3428e4: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x3428e4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3428e8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3428e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3428ec: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x3428ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3428f0: 0xc079140  jal         func_1E4500
    ctx->pc = 0x3428F0u;
    SET_GPR_U32(ctx, 31, 0x3428F8u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x3428F0u, 0x3428F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3428F8u;
label_3428f8:
    // 0x3428f8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3428f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3428fc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x3428fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x342900: 0x24440360  addiu       $a0, $v0, 0x360
    ctx->pc = 0x342900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x342904: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x342904u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x342908: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x342908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x34290c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x34290cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x342910: 0xc079140  jal         func_1E4500
    ctx->pc = 0x342910u;
    SET_GPR_U32(ctx, 31, 0x342918u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x342910u, 0x342918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342918u;
label_342918:
    // 0x342918: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x34291c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x34291cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x342920: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x342920u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x342924: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342928: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x342928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x34292c: 0x8c560234  lw          $s6, 0x234($v0)
    ctx->pc = 0x34292cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 564)));
    // 0x342930: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x342934: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x342934u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x342938: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x342938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x34293c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x34293cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x342940: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x342940u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x342944: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x342944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342948: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x342948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x34294c: 0x24440204  addiu       $a0, $v0, 0x204
    ctx->pc = 0x34294cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
    // 0x342950: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x342950u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x342954: 0xc06b06c  jal         func_1AC1B0
    ctx->pc = 0x342954u;
    SET_GPR_U32(ctx, 31, 0x34295Cu);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x342954u, 0x34295Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34295Cu;
label_34295c:
    // 0x34295c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x34295cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x342960: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x342960u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x342964: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x342964u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x342968: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x342968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x34296c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x34296cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x342970: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342974: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x342974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x342978: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x342978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x34297c: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x34297cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x342980: 0x90a60071  lbu         $a2, 0x71($a1)
    ctx->pc = 0x342980u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 113)));
    // 0x342984: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x342984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x342988: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x342988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x34298c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x34298cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342990: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x342990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x342994: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x342998: 0x8c250140  lw          $a1, 0x140($at)
    ctx->pc = 0x342998u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0140u));
    // 0x34299c: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x34299cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3429a0: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x3429a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3429a4: 0x8c450244  lw          $a1, 0x244($v0)
    ctx->pc = 0x3429a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
    // 0x3429a8: 0x24e40204  addiu       $a0, $a3, 0x204
    ctx->pc = 0x3429a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 516));
    // 0x3429ac: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x3429acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x3429b0: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x3429B0u;
    SET_GPR_U32(ctx, 31, 0x3429B8u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x3429B0u, 0x3429B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3429B8u;
label_3429b8:
    // 0x3429b8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x3429b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3429bc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3429bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3429c0: 0x90620071  lbu         $v0, 0x71($v1)
    ctx->pc = 0x3429c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 113)));
    // 0x3429c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3429c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3429c8: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x3429c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3429cc: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x3429ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3429d0: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x3429d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3429d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3429d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3429d8: 0x8c270140  lw          $a3, 0x140($at)
    ctx->pc = 0x3429d8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5D0140u));
    // 0x3429dc: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x3429dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3429e0: 0xc84821  addu        $t1, $a2, $t0
    ctx->pc = 0x3429e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3429e4: 0x8d350244  lw          $s5, 0x244($t1)
    ctx->pc = 0x3429e4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 580)));
    // 0x3429e8: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x3429e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x3429ec: 0xc074974  jal         func_1D25D0
    ctx->pc = 0x3429ECu;
    SET_GPR_U32(ctx, 31, 0x3429F4u);
    ctx->pc = 0x1D25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D25D0u, 0x3429ECu, 0x3429F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3429F4u;
label_3429f4:
    // 0x3429f4: 0x8fb70118  lw          $s7, 0x118($sp)
    ctx->pc = 0x3429f4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3429f8: 0x26e21330  addiu       $v0, $s7, 0x1330
    ctx->pc = 0x3429f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4912));
    // 0x3429fc: 0x90420070  lbu         $v0, 0x70($v0)
    ctx->pc = 0x3429fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x342a00: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x342a00u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x342a04: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x342a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x342a08: 0x1242002a  beq         $s2, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x342A08u;
    {
        const bool branch_taken_0x342a08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x342a08) {
            ctx->pc = 0x342AB4u;
            return;
        }
    }
    ctx->pc = 0x342A10u;
    // 0x342a10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x342a14: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x342a14u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x342a18: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x342a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x342a1c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x342a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x342a20: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x342a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x342a24: 0x8fb20118  lw          $s2, 0x118($sp)
    ctx->pc = 0x342a24u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342a28: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x342a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x342a2c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342a30: 0x24711330  addiu       $s1, $v1, 0x1330
    ctx->pc = 0x342a30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x342a34: 0x92300070  lbu         $s0, 0x70($s1)
    ctx->pc = 0x342a34u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x342a38: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x342a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x342a3c: 0x390c0  sll         $s2, $v1, 3
    ctx->pc = 0x342a3cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x342a40: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342a44: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x342a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x342a48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x342a4c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x342a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x342a50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x342a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x342a54: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x342a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x342a58: 0x8c720244  lw          $s2, 0x244($v1)
    ctx->pc = 0x342a58u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
    // 0x342a5c: 0x24420204  addiu       $v0, $v0, 0x204
    ctx->pc = 0x342a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
    // 0x342a60: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x342a60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x342a64: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x342a64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x342a68: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x342a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x342a6c: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x342A6Cu;
    SET_GPR_U32(ctx, 31, 0x342A74u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x342A6Cu, 0x342A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A74u;
label_342a74:
    // 0x342a74: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x342a74u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x342a78: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342a7c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x342a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x342a80: 0x90520070  lbu         $s2, 0x70($v0)
    ctx->pc = 0x342a80u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x342a84: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x342a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x342a88: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x342a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x342a8c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x342a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342a90: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x342a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x342a94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x342a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x342a98: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x342a98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x342a9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x342a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x342aa0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x342aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x342aa4: 0x8c550244  lw          $s5, 0x244($v0)
    ctx->pc = 0x342aa4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
    // 0x342aa8: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x342aa8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x342aac: 0xc074974  jal         func_1D25D0
    ctx->pc = 0x342AACu;
    SET_GPR_U32(ctx, 31, 0x342AB4u);
    ctx->pc = 0x1D25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D25D0u, 0x342AACu, 0x342AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342AB4u;
}
