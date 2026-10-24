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

// Function: entry_002991b4
// Address: 0x2991b4 - 0x2993a4
void entry_002991b4_0x2991b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002991b4_0x2991b4");
#endif

    switch (ctx->pc) {
        case 0x29939cu: goto label_29939c;
        default: break;
    }

    ctx->pc = 0x2991b4u;

    // 0x2991b4: 0x3c010085  lui         $at, 0x85
    ctx->pc = 0x2991b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)133 << 16));
    // 0x2991b8: 0x8c263580  lw          $a2, 0x3580($at)
    ctx->pc = 0x2991b8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x853580u));
    // 0x2991bc: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2991bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2991c0: 0xac6601d0  sw          $a2, 0x1D0($v1)
    ctx->pc = 0x2991c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 6));
    // 0x2991c4: 0x3c010085  lui         $at, 0x85
    ctx->pc = 0x2991c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)133 << 16));
    // 0x2991c8: 0x8c303580  lw          $s0, 0x3580($at)
    ctx->pc = 0x2991c8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x853580u));
    // 0x2991cc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x2991ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x2991d0: 0x34630017  ori         $v1, $v1, 0x17
    ctx->pc = 0x2991d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23);
    // 0x2991d4: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x2991d4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2991d8: 0x26700008  addiu       $s0, $s3, 0x8
    ctx->pc = 0x2991d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2991dc: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x2991dcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
    // 0x2991e0: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x2991e0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2991e4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x2991e4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2991e8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x2991e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2991ec: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x2991ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x2991f0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x2991f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x2991f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2991f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2991f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2991f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2991fc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2991fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x299200: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x299200u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x299204: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x299204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299208: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x299208u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x29920c: 0x3c060eee  lui         $a2, 0xEEE
    ctx->pc = 0x29920cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3822 << 16));
    // 0x299210: 0x34c3eeee  ori         $v1, $a2, 0xEEEE
    ctx->pc = 0x299210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)61166);
    // 0x299214: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x299214u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x299218: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x299218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x29921c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x29921cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x299220: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x299220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299224: 0xdc630160  ld          $v1, 0x160($v1)
    ctx->pc = 0x299224u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x299228: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x299228u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29922c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x29922cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299230: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x299230u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x299234: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x299234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x299238: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x299238u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29923c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x29923cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299240: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x299240u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x299244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299248: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x299248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29924c: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x29924cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x299250: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x299250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x299254: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x299254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x299258: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x299258u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29925c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x29925cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299260: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x299260u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x299264: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x299264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x299268: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x299268u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29926c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x29926cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299270: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x299270u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x299274: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x299274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x299278: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x299278u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29927c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x29927cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299280: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x299280u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x299284: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x299284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x299288: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x299288u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29928c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x29928cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299290: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x299290u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x299294: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x299294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299298: 0xdc430168  ld          $v1, 0x168($v0)
    ctx->pc = 0x299298u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 360)));
    // 0x29929c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x29929cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2992a0: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x2992a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2992a4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2992a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2992a8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2992a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2992ac: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x2992acu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2992b0: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x2992b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2992b4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2992b4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2992b8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2992b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2992bc: 0xdc430170  ld          $v1, 0x170($v0)
    ctx->pc = 0x2992bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 368)));
    // 0x2992c0: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x2992c0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2992c4: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x2992c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2992c8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2992c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2992cc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2992ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2992d0: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x2992d0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2992d4: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x2992d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2992d8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2992d8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2992dc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2992dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2992e0: 0xdc430180  ld          $v1, 0x180($v0)
    ctx->pc = 0x2992e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x2992e4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x2992e4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2992e8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x2992e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2992ec: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2992ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2992f0: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x2992f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2992f4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x2992f4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2992f8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x2992f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2992fc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2992fcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x299300: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x299300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299304: 0xdc430178  ld          $v1, 0x178($v0)
    ctx->pc = 0x299304u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x299308: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x299308u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29930c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x29930cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299310: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x299310u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x299314: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x299314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x299318: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x299318u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29931c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x29931cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299320: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x299320u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x299324: 0x3c02e02e  lui         $v0, 0xE02E
    ctx->pc = 0x299324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57390 << 16));
    // 0x299328: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x299328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x29932c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x29932cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x299330: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x299330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x299334: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x299334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x299338: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x299338u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29933c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x29933cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299340: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x299340u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x299344: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x299344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x299348: 0x34424242  ori         $v0, $v0, 0x4242
    ctx->pc = 0x299348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16962);
    // 0x29934c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x29934cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x299350: 0x3c024241  lui         $v0, 0x4241
    ctx->pc = 0x299350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16961 << 16));
    // 0x299354: 0x34422412  ori         $v0, $v0, 0x2412
    ctx->pc = 0x299354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9234);
    // 0x299358: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x299358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29935c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x29935cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x299360: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x299360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299364: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x299364u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x299368: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x299368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x29936c: 0x944201a8  lhu         $v0, 0x1A8($v0)
    ctx->pc = 0x29936cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 424)));
    // 0x299370: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x299370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x299374: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x299374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x299378: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x299378u;
    {
        const bool branch_taken_0x299378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299378) {
            ctx->pc = 0x2993A4u;
            return;
        }
    }
    ctx->pc = 0x299380u;
    // 0x299380: 0xc68001b4  lwc1        $f0, 0x1B4($s4)
    ctx->pc = 0x299380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299384: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x299384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x299388: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x299388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x29938c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x29938cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x299390: 0xc7ac011c  lwc1        $f12, 0x11C($sp)
    ctx->pc = 0x299390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x299394: 0xc040c60  jal         func_103180
    ctx->pc = 0x299394u;
    SET_GPR_U32(ctx, 31, 0x29939Cu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x29939Cu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29939Cu) { return; }
    ctx->pc = 0x29939Cu;
label_29939c:
    // 0x29939c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29939Cu;
    {
        const bool branch_taken_0x29939c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29939c) {
            ctx->pc = 0x2993B4u;
            return;
        }
    }
    ctx->pc = 0x2993A4u;
}
