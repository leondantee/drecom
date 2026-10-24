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

// Function: entry_002fc120
// Address: 0x2fc120 - 0x2fc2c0
void entry_002fc120_0x2fc120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fc120_0x2fc120");
#endif

    ctx->pc = 0x2fc120u;

    // 0x2fc120: 0x1600ffa7  bnez        $s0, . + 4 + (-0x59 << 2)
    ctx->pc = 0x2FC120u;
    {
        const bool branch_taken_0x2fc120 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc120) {
            ctx->pc = 0x2FBFC0u;
            return;
        }
    }
    ctx->pc = 0x2FC128u;
    // 0x2fc128: 0x153e3c  dsll32      $a3, $s5, 24
    ctx->pc = 0x2fc128u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fc12c: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x2fc12cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x2fc130: 0x721c0  sll         $a0, $a3, 7
    ctx->pc = 0x2fc130u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
    // 0x2fc134: 0x2841821  addu        $v1, $s4, $a0
    ctx->pc = 0x2fc134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2fc138: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x2fc138u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2fc13c: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x2fc13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2fc140: 0x24a71600  addiu       $a3, $a1, 0x1600
    ctx->pc = 0x2fc140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 5632));
    // 0x2fc144: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x2fc144u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fc148: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x2fc148u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2fc14c: 0x2253021  addu        $a2, $s1, $a1
    ctx->pc = 0x2fc14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2fc150: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x2fc150u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x2fc154: 0x15263c  dsll32      $a0, $s5, 24
    ctx->pc = 0x2fc154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fc158: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2fc158u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2fc15c: 0x419c0  sll         $v1, $a0, 7
    ctx->pc = 0x2fc15cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x2fc160: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x2fc160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2fc164: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2fc164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fc168: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fc168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fc16c: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x2fc16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2fc170: 0x24a41600  addiu       $a0, $a1, 0x1600
    ctx->pc = 0x2fc170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 5632));
    // 0x2fc174: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x2fc174u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fc178: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2fc178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fc17c: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x2fc17cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fc180: 0x2263821  addu        $a3, $s1, $a2
    ctx->pc = 0x2fc180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2fc184: 0x7ce50000  sq          $a1, 0x0($a3)
    ctx->pc = 0x2fc184u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 5));
    // 0x2fc188: 0x151e3c  dsll32      $v1, $s5, 24
    ctx->pc = 0x2fc188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fc18c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fc18cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fc190: 0x339c0  sll         $a3, $v1, 7
    ctx->pc = 0x2fc190u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fc194: 0x2872021  addu        $a0, $s4, $a3
    ctx->pc = 0x2fc194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x2fc198: 0x26050002  addiu       $a1, $s0, 0x2
    ctx->pc = 0x2fc198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2fc19c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2fc19cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2fc1a0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2fc1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2fc1a4: 0x24661600  addiu       $a2, $v1, 0x1600
    ctx->pc = 0x2fc1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x2fc1a8: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x2fc1a8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fc1ac: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x2fc1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2fc1b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fc1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fc1b4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2fc1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fc1b8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fc1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fc1bc: 0x151e3c  dsll32      $v1, $s5, 24
    ctx->pc = 0x2fc1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fc1c0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fc1c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fc1c4: 0x321c0  sll         $a0, $v1, 7
    ctx->pc = 0x2fc1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fc1c8: 0x2843021  addu        $a2, $s4, $a0
    ctx->pc = 0x2fc1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2fc1cc: 0x26070003  addiu       $a3, $s0, 0x3
    ctx->pc = 0x2fc1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x2fc1d0: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x2fc1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2fc1d4: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2fc1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2fc1d8: 0x24861600  addiu       $a2, $a0, 0x1600
    ctx->pc = 0x2fc1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 5632));
    // 0x2fc1dc: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x2fc1dcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fc1e0: 0x26060003  addiu       $a2, $s0, 0x3
    ctx->pc = 0x2fc1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x2fc1e4: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x2fc1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2fc1e8: 0x2234821  addu        $t1, $s1, $v1
    ctx->pc = 0x2fc1e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2fc1ec: 0x7d240000  sq          $a0, 0x0($t1)
    ctx->pc = 0x2fc1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 4));
    // 0x2fc1f0: 0x15463c  dsll32      $t0, $s5, 24
    ctx->pc = 0x2fc1f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fc1f4: 0x8463f  dsra32      $t0, $t0, 24
    ctx->pc = 0x2fc1f4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 24));
    // 0x2fc1f8: 0x819c0  sll         $v1, $t0, 7
    ctx->pc = 0x2fc1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 7));
    // 0x2fc1fc: 0x2833821  addu        $a3, $s4, $v1
    ctx->pc = 0x2fc1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2fc200: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2fc200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2fc204: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x2fc204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fc208: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2fc208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2fc20c: 0x24641600  addiu       $a0, $v1, 0x1600
    ctx->pc = 0x2fc20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x2fc210: 0x78890000  lq          $t1, 0x0($a0)
    ctx->pc = 0x2fc210u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fc214: 0x26070004  addiu       $a3, $s0, 0x4
    ctx->pc = 0x2fc214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2fc218: 0x74100  sll         $t0, $a3, 4
    ctx->pc = 0x2fc218u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2fc21c: 0x2282021  addu        $a0, $s1, $t0
    ctx->pc = 0x2fc21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x2fc220: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x2fc220u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x2fc224: 0x15263c  dsll32      $a0, $s5, 24
    ctx->pc = 0x2fc224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fc228: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2fc228u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2fc22c: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x2fc22cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x2fc230: 0x2843821  addu        $a3, $s4, $a0
    ctx->pc = 0x2fc230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2fc234: 0x26040005  addiu       $a0, $s0, 0x5
    ctx->pc = 0x2fc234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x2fc238: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2fc238u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2fc23c: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x2fc23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2fc240: 0x24761600  addiu       $s6, $v1, 0x1600
    ctx->pc = 0x2fc240u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x2fc244: 0x7ac60000  lq          $a2, 0x0($s6)
    ctx->pc = 0x2fc244u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2fc248: 0x26050005  addiu       $a1, $s0, 0x5
    ctx->pc = 0x2fc248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x2fc24c: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x2fc24cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2fc250: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x2fc250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2fc254: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x2fc254u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x2fc258: 0x15b63c  dsll32      $s6, $s5, 24
    ctx->pc = 0x2fc258u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fc25c: 0x16b63f  dsra32      $s6, $s6, 24
    ctx->pc = 0x2fc25cu;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 24));
    // 0x2fc260: 0x1619c0  sll         $v1, $s6, 7
    ctx->pc = 0x2fc260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 7));
    // 0x2fc264: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x2fc264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2fc268: 0x26160006  addiu       $s6, $s0, 0x6
    ctx->pc = 0x2fc268u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x2fc26c: 0x163100  sll         $a2, $s6, 4
    ctx->pc = 0x2fc26cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x2fc270: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2fc270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2fc274: 0x24651600  addiu       $a1, $v1, 0x1600
    ctx->pc = 0x2fc274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x2fc278: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x2fc278u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fc27c: 0x26030006  addiu       $v1, $s0, 0x6
    ctx->pc = 0x2fc27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x2fc280: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x2fc280u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fc284: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x2fc284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2fc288: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fc288u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2fc28c: 0x152e3c  dsll32      $a1, $s5, 24
    ctx->pc = 0x2fc28cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) << (32 + 24));
    // 0x2fc290: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x2fc290u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x2fc294: 0x521c0  sll         $a0, $a1, 7
    ctx->pc = 0x2fc294u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x2fc298: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x2fc298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2fc29c: 0x26030007  addiu       $v1, $s0, 0x7
    ctx->pc = 0x2fc29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x2fc2a0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2fc2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fc2a4: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x2fc2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2fc2a8: 0x24a41600  addiu       $a0, $a1, 0x1600
    ctx->pc = 0x2fc2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 5632));
    // 0x2fc2ac: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x2fc2acu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fc2b0: 0x26030007  addiu       $v1, $s0, 0x7
    ctx->pc = 0x2fc2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x2fc2b4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2fc2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2fc2b8: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x2fc2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2fc2bc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fc2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x2fc2c0u;
}
