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

// Function: entry_001912dc
// Address: 0x1912dc - 0x1914c8
void entry_001912dc_0x1912dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001912dc_0x1912dc");
#endif

    switch (ctx->pc) {
        case 0x191484u: goto label_191484;
        default: break;
    }

    ctx->pc = 0x1912dcu;

    // 0x1912dc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1912dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1912e0: 0x34430015  ori         $v1, $v0, 0x15
    ctx->pc = 0x1912e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21);
    // 0x1912e4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1912e4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1912e8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1912e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1912ec: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1912ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1912f0: 0x7200a628  paddub      $s4, $s0, $zero
    ctx->pc = 0x1912f0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1912f4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1912f4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1912f8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1912f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1912fc: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x1912fcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x191300: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x191300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x191304: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x191304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x191308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19130c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x19130cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x191310: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x191310u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x191314: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x191314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x191318: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x191318u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x19131c: 0x3c020eee  lui         $v0, 0xEEE
    ctx->pc = 0x19131cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3822 << 16));
    // 0x191320: 0x3443eeee  ori         $v1, $v0, 0xEEEE
    ctx->pc = 0x191320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61166);
    // 0x191324: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x191324u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x191328: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x191328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19132c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19132cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x191330: 0xde2301d0  ld          $v1, 0x1D0($s1)
    ctx->pc = 0x191330u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x191334: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x191334u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x191338: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x191338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19133c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19133cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x191340: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x191340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x191344: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x191344u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x191348: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x191348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19134c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19134cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x191350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191354: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x191354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x191358: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x191358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x19135c: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x19135cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x191360: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x191360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x191364: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x191364u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x191368: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x191368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19136c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19136cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x191370: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x191370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x191374: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x191374u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x191378: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x191378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19137c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19137cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x191380: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x191380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x191384: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x191384u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x191388: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x191388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19138c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19138cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x191390: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x191390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x191394: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x191394u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x191398: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x191398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19139c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19139cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1913a0: 0xde2301e8  ld          $v1, 0x1E8($s1)
    ctx->pc = 0x1913a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x1913a4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1913a4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1913a8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1913a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1913ac: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1913acu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1913b0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1913b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1913b4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1913b4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1913b8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1913b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1913bc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1913bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1913c0: 0xde2301e0  ld          $v1, 0x1E0($s1)
    ctx->pc = 0x1913c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x1913c4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1913c4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1913c8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1913c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1913cc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1913ccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1913d0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1913d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1913d4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1913d4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1913d8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1913d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1913dc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1913dcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1913e0: 0xde2301d8  ld          $v1, 0x1D8($s1)
    ctx->pc = 0x1913e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x1913e4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1913e4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1913e8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1913e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1913ec: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1913ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1913f0: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x1913f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1913f4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1913f4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1913f8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1913f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1913fc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1913fcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x191400: 0xde2301f0  ld          $v1, 0x1F0($s1)
    ctx->pc = 0x191400u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x191404: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x191404u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x191408: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x191408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19140c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19140cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x191410: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x191410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x191414: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x191414u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x191418: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x191418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19141c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19141cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x191420: 0x3c02c02a  lui         $v0, 0xC02A
    ctx->pc = 0x191420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49194 << 16));
    // 0x191424: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x191424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x191428: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x191428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x19142c: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x19142cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x191430: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x191430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x191434: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x191434u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x191438: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x191438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19143c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19143cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x191440: 0x24024124  addiu       $v0, $zero, 0x4124
    ctx->pc = 0x191440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16676));
    // 0x191444: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x191444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x191448: 0x3c021241  lui         $v0, 0x1241
    ctx->pc = 0x191448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4673 << 16));
    // 0x19144c: 0x34422412  ori         $v0, $v0, 0x2412
    ctx->pc = 0x19144cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9234);
    // 0x191450: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x191450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x191454: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x191454u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x191458: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x191458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x19145c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19145cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x191460: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x191460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191464: 0xc64001b4  lwc1        $f0, 0x1B4($s2)
    ctx->pc = 0x191464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191468: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x191468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19146c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x19146cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x191470: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x191470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x191474: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x191474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x191478: 0xc7ac0160  lwc1        $f12, 0x160($sp)
    ctx->pc = 0x191478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19147c: 0xc040c60  jal         func_103180
    ctx->pc = 0x19147Cu;
    SET_GPR_U32(ctx, 31, 0x191484u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x191484u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x191484u) { return; }
    ctx->pc = 0x191484u;
label_191484:
    // 0x191484: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x191484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191488: 0x3c0244c7  lui         $v0, 0x44C7
    ctx->pc = 0x191488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17607 << 16));
    // 0x19148c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19148cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191490: 0x0  nop
    ctx->pc = 0x191490u;
    // NOP
    // 0x191494: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x191494u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191498: 0x0  nop
    ctx->pc = 0x191498u;
    // NOP
    // 0x19149c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x19149Cu;
    {
        const bool branch_taken_0x19149c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19149c) {
            ctx->pc = 0x1914C8u;
            return;
        }
    }
    ctx->pc = 0x1914A4u;
    // 0x1914a4: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x1914a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1914a8: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x1914a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x1914ac: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1914acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1914b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1914b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1914b4: 0x0  nop
    ctx->pc = 0x1914b4u;
    // NOP
    // 0x1914b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1914b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1914bc: 0x0  nop
    ctx->pc = 0x1914bcu;
    // NOP
    // 0x1914c0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1914C0u;
    {
        const bool branch_taken_0x1914c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1914c0) {
            ctx->pc = 0x1914D4u;
            return;
        }
    }
    ctx->pc = 0x1914C8u;
}
